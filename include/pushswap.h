/*
** EPITECH PROJECT, 2021
** pushswap project header
** File description:
** structures, prototypes
*/

#ifndef PUSHSWAP_H
    #define PUSHSWAP_H

    #include "my.h"

/* --- STRUCTURES & ENUM ---*/

typedef struct info_s
{
    int len; 
    int counter;
} info_t;
typedef struct node_s
{
    int data;
    int len;
    struct node_s *next;
    struct node_s *prev;
} node_t;

/* --- PROTOTYPES --- */

//Calling function
int pushswap(int argc, char **argv);

//Linked list functions
node_t *create_list(int data);
node_t *init_list(int argc, char **argv);
node_t *add_node_last(node_t *list, int data);
node_t *add_node_first(node_t *list, int data);
node_t *swap_two_first_elem(node_t **list, int count);
void print_list(node_t *list);
void free_list(node_t *list);
int is_list_sorted(node_t *list);

//Sort function
void my_sort(node_t *l_a, node_t *l_b, int len);
int my_comparaison(node_t *l_a, node_t *l_b, int counter);

//operations
node_t *pop_first_elem(node_t **list);//pa
node_t *push_first_elem(node_t **list , node_t *tmp); //pb
int pop_and_push(node_t **l_a, node_t **l_b, char *str, int count);//pa & pb

//Error handling
int check_error(int argc, char **argv);

#endif
