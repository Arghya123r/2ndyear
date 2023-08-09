#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
  
#define MAX_EXPR_SIZE 100

char stack[MAX_EXPR_SIZE];
int top = -1;

void push(int elem){
    if(top == MAX_EXPR_SIZE){
        printf("Error:Stack Overflow");
    }
    else{
        top++;
        stack[top]=elem;
    }

}

int pop(){
    int x;
    if(top < -1){
        printf("Error: Empty Stack");
        return 0;;
    }
    else{
        return stack[top--];
    }
}
