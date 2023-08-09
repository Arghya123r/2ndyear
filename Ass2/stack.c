#include <stdio.h>
#include <stdlib.h>
#define MAX 20

void push(int);
int pop();

int stack[MAX];
int TOP=-1;

int main(){

    push(3);
    push(5);
    push(9);
    push(12);
    int x = pop();
    printf("%d",x);
    return 0;

}

void push(int elem){
    if(TOP == MAX){
        printf("Error:Stack Overflow");
    }
    else{
        TOP++;
        stack[TOP]=elem;
    }

}

int pop(){
    int x;
    if(TOP <= 0){
        printf("Error: Empty Stack");
        return 0;;
    }
    else{
        return stack[TOP--];
    }
}