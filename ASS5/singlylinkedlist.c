#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    node *next;
};
node *head = NULL;

void push(node **head_ref, int val){
    node* new_node = (node*)malloc(sizeof(node));

    new_node->data = val;
    new_node->next = (*head_ref);
    *head_ref = new_node;
}

void deleteend(node **head_ref){
    node *end = *head_ref;
    node *prev = NULL;

    while(end->next){
        prev = end;
        end = end->next;
    }
    prev->next = NULL;

    free(end);
}