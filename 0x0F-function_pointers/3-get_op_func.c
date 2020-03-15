#include "3-calc.h"
#include "stdio.h"
#include <string.h>
#include <stdlib.h>
/**
 *get_op_func -  
 *@s: 
 *Retur3 n: 
 */
int (*get_op_func(char *s))(int, int){
  op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
	int i = 0;  

  
}