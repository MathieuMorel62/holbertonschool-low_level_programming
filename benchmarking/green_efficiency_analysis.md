## Measurement Methodology

For this project, I followed a systematic approach to measurement based entirely on the provided C programs and real execution outputs.  
For the baseline experiment, I compiled `baseline_loop.c` using strict flags:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long baseline_loop.c -o baseline_loop`

I then executed the resulting binary three consecutive times on the same machine, avoiding other heavy tasks in parallel. The program internally used `clock()` and `CLOCKS_PER_SEC` to convert clock ticks to seconds. The three measured execution times for 100,000,000 iterations, recorded in `baseline_loop-metrics.md`, were:

- Run 1: 0.120176 seconds  
- Run 2: 0.116470 seconds  
- Run 3: 0.117818 seconds  

These values serve as a baseline for understanding timing variability.

For the algorithm comparison, I compiled `comparison_algorithms.c` with the same compiler flags and ran it three times. Each run produced execution times for two implementations: a naive algorithm with nested loops and a single-pass algorithm with one loop. The raw results were:

- Run 1: Naive 2.211274 s, Single-pass 0.000086 s  
- Run 2: Naive 2.167140 s, Single-pass 0.000089 s  
- Run 3: Naive 2.175642 s, Single-pass 0.000086 s  

From these, I computed average times: approximately 2.184685 s for the naive version and 0.000087 s for the single-pass version, as documented in `comparison_algorithms-metrics.md`.

Finally, for the controlled instrumentation experiment, I modified only the `main` function of `instrumentation_lab.c` to wrap the calls to `build_dataset`, `process_dataset`, and `reduce_checksum` with `clock()`-based measurements. I also measured a total duration that covered all three phases. A representative run produced:

- `TOTAL seconds: 0.000321`  
- `BUILD_DATA seconds: 0.000167`  
- `PROCESS seconds: 0.000089`  
- `REDUCE seconds: 0.000063`  

These values underpin the analysis below.

## Observed Performance Differences

The baseline loop experiment already shows an important effect: even for a deterministic calculation, the three timing results are close but not identical (between roughly 0.116 and 0.120 seconds). This illustrates that timing measurements naturally include noise from the operating system, scheduling, caches, and other background activity.

The algorithm comparison exposes a far stronger contrast. The naive algorithm, which uses a nested loop and repeatedly re-counts even elements, takes on average about 2.184685 seconds. The single-pass algorithm, which simply scans the array once and increments a counter when an element is even, takes about 0.000087 seconds. The ratio between these averages is roughly:

The ratio is computed as 2.184685 / 0.000087 ≈ 25,111.

In other words, for this specific data size and environment, the naive version is on the order of **25,000 times slower** than the single-pass implementation.

During each run of `comparison_algorithms.c`, I also examined the numerical results. The naive algorithm reports `625025000`, while the single-pass algorithm reports `25000`. These values are both consistent with their respective logic: the naive implementation counts many even elements multiple times due to the inner loop that runs from index 0 up to `i`, whereas the single-pass implementation counts each even element exactly once. This confirms that both functions operate on the same underlying dataset but perform very different amounts of work to derive their results.

In `instrumentation_lab.c`, the phase-level timing indicates that `BUILD_DATA` (≈ 0.000167 s) accounts for a significant portion of the total (0.000321 s), followed by `PROCESS` (≈ 0.000089 s) and `REDUCE` (≈ 0.000063 s). The total time is slightly greater than the sum of the three components, which is expected due to measurement overhead and surrounding code.

## Relation Between Runtime and Energy Consumption

This project does not attempt to measure real power draw in watts or joules. Instead, it uses execution time as a practical proxy for energy usage. When a CPU spends more time actively executing a piece of code, it generally consumes more energy over that interval. Therefore, a large reduction in runtime is typically correlated with a reduction in energy consumption.

In this context, the naive algorithm’s runtime being about 25,000 times longer than the single-pass runtime strongly suggests that it is dramatically less energy-efficient for the same conceptual task on the same dataset. Similarly, in `instrumentation_lab.c`, most of the CPU work for this small program appears to be in building the dataset, with smaller but still measurable contributions from processing and reduction. If this program were run repeatedly or at scale, optimizing the most expensive phases would likely yield the greatest energy savings.

However, it is important to emphasize that these are still **indirect** conclusions. The measurements show how long the CPU is busy; they do not directly provide wattage or total energy in joules. Execution time is used here as an approximate indicator, not a direct physical measurement.

## Limitations of the Experiment

Several limitations must be acknowledged. First, all measurements were performed on a single machine under normal desktop conditions. Background processes, OS scheduling decisions, and dynamic CPU frequency scaling may all introduce noise into the timing results. While multiple runs help smooth out this noise, they do not eliminate it.

Second, the chosen problem sizes (100,000,000 iterations for the baseline loop, and arrays of size 50,000 in the other programs) are fixed and somewhat arbitrary. The absolute timings and ratios observed here may change for smaller or larger datasets, even if the qualitative conclusion about algorithmic complexity remains similar.

Third, the reliance on `clock()` and `CLOCKS_PER_SEC` provides a view of CPU time, but not of other aspects such as memory bandwidth, I/O, or thermal throttling. Modern processors have complex power-management policies that can affect how strongly time correlates with energy. Our assumption that “longer runtime implies longer CPU activity and thus higher energy use” is reasonable but still a simplification.

Finally, these experiments evaluate isolated programs rather than integrated systems. In real-world applications, performance and energy behavior can be influenced by interactions between modules, frameworks, and external services, which are not modeled here.

## Practical Engineering Takeaway

The main practical lesson from these experiments is that disciplined measurement with simple tools is enough to reveal large performance and efficiency differences. By carefully timing each phase, recording multiple runs, and computing averages, we can identify where most of the runtime is spent and which algorithmic choices matter most.

The comparison between the naive and single-pass even counters clearly illustrates that choosing an appropriate algorithm (avoiding unnecessary nested loops and repeated work) can yield improvements of several orders of magnitude. Such gains are far more impactful than micro-optimizations on already efficient code. Likewise, the instrumentation of `instrumentation_lab.c` shows that understanding which phase dominates the total runtime is crucial for prioritizing optimization work.

From a sustainability perspective, writing efficient code is not only about faster programs but also about reducing unnecessary energy consumption, especially at scale. Systems that run inefficient algorithms millions of times per day waste both time and energy. By making evidence-based decisions grounded in measurements like the ones in this project, engineers can design software that is faster, more scalable, and more environmentally responsible.