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
    printf("\n");
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
