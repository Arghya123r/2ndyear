#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;
NODE *head = NULL;

int pop(){
    NODE *temp;
    temp = head;
    head = head->next;
    int x;
    x = temp->data;
    free(temp);
    return x;
}

void display(){
    NODE *n;
    n = head;
    printf("\nThe list is: ");
    while(n!=NULL){
        printf("%d, ", n->data);
        n = n->next;
    }
    printf("\n");
}
int peek(){
    int x = head->data;
}
void push(int val){
    NODE *new_node = (NODE*)malloc(sizeof(NODE));
    
    new_node->data = val;
    
    if(head == NULL){
        head = new_node;
    }
    else{
        new_node->next=head;
        head = new_node;
    }
}

int main(){
    int choice,item,x,n;
    push(45);
    push(23);
    push(55);
    push(53);
    push(34);
    push(1);
    pritnf("The initial list is:\n");
    display();
    while (choice != 0) {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("Exiting the program.\n");
                continue;;
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &item);
                push(item);
                continue;;
            case 2:
                x=pop();
                printf("%d has been removed from the stack.");
                continue;
            case 3:
                n=peek();
                printf("The first data in the stack is %d",n);
                continue;
            case 4:
                display();
                continue;
            default:
                printf("Invalid choice. Please try again.\n");
                continue;
        }
    }
    return 0;
}