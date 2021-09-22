#ifndef MONTY_H_
#define MONTY_H_
extern int data;
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void find_inst(char **tokens, stack_t **stack, unsigned int line_number);
#endif
