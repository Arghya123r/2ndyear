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
    node *end;
    node *prev = NULL;
    end = *head_ref;
    while(end->next){
        prev = end;
        end = end->next;
    }
    prev->next = NULL;

    free(end);
}

void deletehead(node **head){
    temp = *head;
    head = head->next;

    free(temp);
}