#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"
static statue stack_full(stack_ *mystack);
static statue stack_empty(stack_ *mystack);


statue stack_inatialzation(stack_ *mystack)
{
    statue ret = NOK;
    if (NULL == mystack )
        ret= NOK;
    else
    {
        mystack->stack_top = -1;
        ret= OK;
    }
    return ret;
}
statue stack_push(stack_ *mystack ,sint32_t value)
{
    statue ret = NOK;
    if ((NULL == mystack )||(stack_full(mystack) == ISFULL ))
        ret= NOK;
    else
    {
        mystack->stack_top++;
        mystack->stack_data[mystack->stack_top] = value;
        ret= OK;
    }
    return ret;
}
statue stack_pop(stack_ *mystack ,sint32_t *value)
{
    statue ret = NOK;
    if ((NULL == mystack ) || (NULL == value )||(stack_empty(mystack) == ISEMPTY ))
        {
            ret= NOK;
        }
    else
    {
        *value = mystack->stack_data[mystack->stack_top];
        //printf("the value is poped from the stack : %i\n",*value);
        mystack->stack_top--;
        ret= OK;
    }
    return ret;
}
statue stack_top(stack_ *mystack ,sint32_t *value)
{
    statue ret = NOK;
    if ((NULL == mystack ) || (NULL == value )||(stack_empty(mystack) == ISEMPTY ))
        {
            ret= NOK;
        }
    else
    {
        *value = mystack->stack_data[mystack->stack_top];
        ret= OK;
    }
    return ret;
}
statue stack_size(stack_ *mystack ,uint32_t *stack_size)
{
    statue ret = NOK;
    if ((NULL == mystack ) || (NULL == stack_size )||(stack_empty(mystack) == ISEMPTY ))
        {
            ret= NOK;
        }
    else
    {
        mystack->stack_top++;
        *stack_size = mystack->stack_top;
        ret= OK;
    }
    return ret;
}
statue stack_display(stack_ *mystack )
{
    statue ret = NOK;
    sint32_t stack_counter =0;

    if ((NULL == mystack )||(stack_empty(mystack) == ISEMPTY ))
        {
            ret= NOK;
        }
    else
    {
        printf("Data of Stack : ");
        for(stack_counter = mystack->stack_top ;stack_counter>=0;stack_counter--)
        {
            printf("%i   ",mystack->stack_data[stack_counter]);

        }
        printf("\n");
        ret= OK;
    }
    return ret;
}
static statue stack_full(stack_ *mystack)
{
    statue ret = NOK;
    if (NULL == mystack )
        {
            ret= NOK;
        }
    else
    {
        if (mystack->stack_top == -1 )
        {
            ret= ISEMPTY;
        }
        else
        {
            ret= NOTEMPTY;
        }
    }
    return ret;
}
static statue stack_empty(stack_ *mystack)
{
    statue ret = NOK;
    if (NULL == mystack )
        {
            ret= NOK;
        }
    else
    {
        if (mystack->stack_top == MAX_SIZE-1 )
        {
            ret= ISFULL;
        }
        else
        {
            ret= NOTFULL;
        }
    }
    return ret;
}
