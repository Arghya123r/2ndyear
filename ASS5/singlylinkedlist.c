#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;
NODE *head = NULL;
NODE *tail = NULL;

void push(int val){
    NODE *new_node = (NODE*)malloc(sizeof(NODE));
    
    new_node->data = val;
    
    if(head == NULL && tail == NULL){
        head = new_node;
        tail = new_node;
    }
    else{
        tail->next = new_node;
        tail = new_node;
    }
}

void deleteend(){
    NODE *end;
    NODE *prev = NULL;
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
    NODE *temp;
    temp = head;
    head = head->next;

    free(temp);
}

void display(){
    NODE *n;
    n = head;
    printf("\nThe list is: ");
    while(n!=NULL){
        printf("%d, ", n->data);
        n = n->next;
    }
}

void reverse(){
    NODE *current = head;
    NODE *next = NULL, *prev = NULL;
    NODE *temp = head;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    tail = temp;
}

int main(){
    push(45);
    push(23);
    push(55);
    display();
    reverse();
    display();
    push(53);
    display();
    deletehead();
    display();
    deleteend();
    display();
    return 0;
}
