#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    node *next;
};
node *head = NULL;
node *tail = NULL;

void push(int val){
    node* new_node = (node*)malloc(sizeof(node));
    
    new_node->data = val;
    new_node->next = tail;
    
    if(head == NULL && tail == NULL){
        head = new_node;
        tail = new_
    }
    else{
        tail.next = new_node;
        tail = new_node;
    }
}

void deleteend(){
    node *end;
    node *prev = NULL;
    end = head;
    while(end->next){
        prev = end;
        end = end->next;
    }
    prev->next = NULL;
    tail = prev;

    free(end);
}

void deletehead(){
    node *temp;
    temp = head;
    head = head->next;

    free(temp);
}

void display(){
    node *n;
    n = head;
    printf("The list is: ")
    while(n->next){
        printf("%d, ", n->data);
        n = n->next;
    }
}

