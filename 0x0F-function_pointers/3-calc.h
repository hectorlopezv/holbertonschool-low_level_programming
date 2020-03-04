typedef struct dog op_t;

/**
  * struct op - Struct op
  *
  * @op: The operator
  * @f: The function associated
  */

struct op 
{
	char *op;
	int (*f)(int a, int b);
};

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
