#include <stdio.h>

typedef struct Node
{
    int data;

    Node *prev;
    Node *next;
}Node;

Node *head = NULL;
Node *tail = NULL;

void push(int data){
    Node new_node = (Node)malloc(sizeof(Node));
    new_node->data = data;
    if(head==NULL && tail == NULL){
        head = new_node;
        tail = new_node;
    }
    else{
        new_node->prev=tail;
        tail->next=new_node;
        tail = new_node;
    }
}

void deletehead(){
    Node *temp;
    temp = head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}

void deleteend(){
    Node *temp;
    temp = tail;
    tail = tail->prev;
    tail->next=NULL;
    free(temp);
}

void reverse(){
    Node *temp = NULL;
    Node *current = head;

    while(current!=NULL){
        temp = current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }
}
