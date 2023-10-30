#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    int priority;
    struct node *next;
}Node;

Node* newnode(int d, int prio)
{
    Node* temp = (Node*)malloc(sizeof(Node));

    temp->data=d;
    temp->priority=prio;
    temp->next=NULL;
    return temp;
}

int peek(Node **head){return (*head)->data;}  //shows the highest priority data

int delete(Node **head)
{
    Node *temp = *head;
    (*head) = (*head)->next;        //deletes the data with the highest priority
    free(temp);
}

void enqueue(Node** head, int d, int p)
{
    Node* start = (*head);
 
    // Create new Node
    Node* temp = newnode(d, p);
 
    // Special Case: The head of list has
    // lesser priority than new node
    if ((*head)->priority < p) {
        temp->next = *head;                 // Insert New Node before head
        (*head) = temp;
    }
    else {
 
        // Traverse the list and find a
        // position to insert new node
        while (start->next != NULL
               && start->next->priority > p) {
            start = start->next;
        }
 
        // Either at the ends of the list
        // or at required position
        temp->next = start->next;
        start->next = temp;
    }
}

void display(Node** head){
    Node *temp = (*head);
    while(temp!= NULL){
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    free(temp);
}

int main()
{
    int n,num,prio;
    Node *pq = newnode(4,6);
    enqueue(&pq, 5, 2);
    enqueue(&pq, 6, 3);
    enqueue(&pq, 7, 0);
    printf("The initial list is: ");
    display(&pq);
	while(1){																				//loop until user inputs 4 or exit command.
		printf("\nEnter 1 to enqueue, 2 to dequeue, 3 to display, 4 to peek, 5 to exit: ");
		scanf("%d", &n);
		
		switch(n){
			case(1):
				printf("\nEnter the integer to enqueue: ");
				scanf("%d", &num);
                printf("Enter the priority of the data: ");
                scanf("%d", &prio);
				enqueue(&pq,num,prio);
				printf("The value has been Enqueued.");
				continue;
			case(2):
				delete(&pq);
				printf("The data with the most priority has been removed form the queue.");
				continue;
			case(3):
                printf("The list is: ");
				display(&pq);
				continue;
            case(4):
                printf("The highest priority data is %d",pq->data);
                continue;
			case(5):
				printf("Exiting.\n");
				return 0;
			default:
				printf("Wrong Input.");
				continue;
		}
	}
	return 0;
}