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
    int num,n,x;
    push(45);
    push(23);
    push(55);
    push(53);
    push(34);
    push(1);
    pritnf("The initial list is:\n");
    display();
    	while(1){																				//loop until user inputs 4 or exit command.
		printf("\nEnter 1 to push, 2 to reverse, 3 to display, 4 delete from the start, 5 to delete from the end, and 6 to exit: ");
		scanf("%d", &n);
		
		switch(n){
			case(1):
				printf("\nEnter the integer to push: ");
				scanf("%d", &num);
				push(num);
				printf("The value has been added to the list.");
				continue;
			case(2):
				reverse();
				display();
				continue;
			case(3):
				display();
				continue;
			case(4):
                deletehead();
                display();
                continue;
            case(5):
                deleteend();
                display();
                continue;
            case(6):
                printf("Exiting...");
                return 0;
                break;
			default:
				printf("Wrong Input.");
				continue;
		}
	}

    return 0;
}
