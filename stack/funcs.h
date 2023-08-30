
#ifndef FUNC_H
#define FUNC_H

#include "types.h"
#define MAX_SIZE 5
typedef enum {
    NOK,
    OK,
    ISEMPTY,
    NOTEMPTY,
    ISFULL,
    NOTFULL,
}statue;
typedef struct{
    sint32_t stack_data[MAX_SIZE];
    sint32_t stack_top;

}stack_;

statue stack_inatialzation(stack_ *mystack);
statue stack_push(stack_ *mystack ,sint32_t value);
statue stack_pop(stack_ *mystack ,sint32_t *value);
statue stack_top(stack_ *mystack ,sint32_t *value);
statue stack_size(stack_ *mystack ,uint32_t *stack_size);
statue stack_display(stack_ *mystack );

#endif // FUNC_H


