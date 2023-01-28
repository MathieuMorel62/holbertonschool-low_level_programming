#ifndef FUNCTION_PROTOTYPES
#define FUNCTION_PROTOTYPES

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* This is five different functions to choose */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Function that selects the correct function to perform the operation */

int (*get_op_func(char *s))(int, int);

#endif
