#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
extern int value[];
void mty_pall(stack_t **stack, unsigned int tway);
void mty_push(stack_t **stack, unsigned int tway);
int check_if_number(char *str);
int check_if_push(char **tw, int njia);
int is_ascii(int c);
int delete_stack_head(stack_t **head);
int delete_stack_end(stack_t **head);
int print_stack(stack_t **head);
int add_to_queue(stack_t **head, int n);
void check_argc(int argc);
void check_valid_file(char *filename);
void check_file_stream(FILE *fs, char *filename);
void check_opcode(void (*opcode)(), int njia, char *cmd);
void check_fail(char *line, FILE *fs, stack_t *head);
void check_data_structure(char *opcode);
void mty_pop(stack_t **stack, unsigned int tway);
void mty_add(stack_t **stack, unsigned int tway);
void mty_pint(stack_t **stack, unsigned int tway);
int add_to_stack(stack_t **head, int n);
void free_stack(stack_t *head);
void (*get_opcode_func(char *s))(stack_t **stack, unsigned int tway);
void mty_swap(stack_t **stack, unsigned int tway);
void mty_sub(stack_t **stack, unsigned int tway);
void mty_div(stack_t **stack, unsigned int tway);
void mty_mul(stack_t **stack, unsigned int tway);
void mty_mod(stack_t **stack, unsigned int tway);
void mty_nop(stack_t **stack, unsigned int tway);
void mty_pchar(stack_t **stack, unsigned int tway);
void mty_pstr(stack_t **stack, unsigned int tway);
void mty_rotl(stack_t **stack, unsigned int tway);
void mty_rotr(stack_t **stack, unsigned int tway);
void mty_stack(stack_t **stack, unsigned int tway);
void mty_queue(stack_t **stack, unsigned int tway);
int tokenize_line(char *s, char *tokens[]);
void clear_strings(char *tokens[]);
int check_empty(const char *s);
int check_if_comment(char **token);
#endif
