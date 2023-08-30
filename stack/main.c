#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

stack_ stack1;
uint32_t ret;

int main()
{
    sint32_t poped_element = 10;
    ret = stack_inatialzation(&stack1);
    if (ret == NOK)
    {
        printf("stack inatialzation is failed \n");
    }
    else
    {
        printf("stack inatialzation is successed \n");
    }
    ret = stack_push(&stack1 ,10);
    ret = stack_push(&stack1 ,20);
    ret = stack_push(&stack1 ,30);
    ret = stack_push(&stack1 ,40);
    ret = stack_display(&stack1);
    ret = stack_top(&stack1 ,&poped_element);
    if (ret == NOK)
    {
        printf("stack_pop is failed \n");
    }
    else
    {
       printf("toped_element = %i \n",poped_element);
    }
    ret = stack_display(&stack1);
    ret = stack_pop(&stack1 ,&poped_element);
    if (ret == NOK)
    {
        printf("stack_pop is failed \n");
    }
    else
    {
       printf("poped_element = %i \n",poped_element);
    }

    ret = stack_display(&stack1);

    ret = stack_size(&stack1 ,&poped_element);
    if (ret == NOK)
    {
        printf("stack_size function is failed \n");
    }
    else
    {
       printf("size of stack  = %i \n",poped_element);
    }
    return 0;
}
