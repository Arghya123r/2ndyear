#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int queue[MAX];
int front = -1,rear = -1;

void enqueue(int var){
	if(rear == (MAX - 1)){
		exit(0);
	}
	
	if(front == -1){		//IF it is the first entry in the queue
		front = 0;
	}
	
	rear++;
	queue[rear] = var;
}

int dequeue(){
	if(rear < 0){
		exit(0);		//If there are no elements in the array throw error
	}
	int x;
	if(front > -1 && rear >= front){			// loop until front arrives
		x = queue[front];
		front++;
	}
	else
		exit(0);		//Queue Empty
	
	return x;
}

void display(){
	if(front < -1 || front > rear){
		printf("The queue is empty.");
		return;
		}
	int i;
	printf("\n Queue is: ");
	for(i=front;i<=rear;i++)
		printf("%d, ",queue[i]);
}



int main()
{
	int n,num,x;
	while(1){																				//loop until user inputs 4 or exit command.
		printf("\nEnter 1 to enqueue, 2 to dequeue, 3 to display, 4 to exit the menu: ");
		scanf("%d", &n);
		
		switch(n){
			case(1):
				printf("\nEnter the integer to enqueue: ");
				scanf("%d", &num);
				enqueue(num);
				printf("The value has been Enqueued.");
				continue;
			case(2):
				x = dequeue();
				printf("%d has been dequeued.", x);
				continue;
			case(3):
				display();
				continue;
			case(4):
				printf("Exiting.\n");
				return 0;
			default:
				printf("Wrong Input.");
				continue;
		}
	}
	return 0;
}
