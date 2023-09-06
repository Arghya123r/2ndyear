#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;

    struct node *prev;
    struct node *next;
}Node;

Node *head = NULL;
Node *tail = NULL;

void push(int data){
    Node *new_node = (Node*)malloc(sizeof(Node));
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
    Node *real = head;

    while(current!=NULL){
        temp = current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }
    if(temp!=NULL){
        head = temp->prev;
    }
    tail = real;
}

void display(){
    Node *new = head;
    printf("The list is: ");
    while (new!=NULL)
    {
        printf("%d, ",new->data);
        new = new->next;
    }
    printf("\n");
    
}

int main(){
    push(45);
    push(23);
    push(55);
    push(67);
    push(65);
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
