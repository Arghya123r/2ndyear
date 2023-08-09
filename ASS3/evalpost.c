#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
  
#define MAX_EXPR_SIZE 100

int stack[MAX_EXPR_SIZE];
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

int evaluatePostfix(char* exp)
{
    int i;
        for(i=0; exp[i]; ++i){
            if(isdigit(exp[i]))
                push(exp[i]-'0');
            else{
                int val1 = pop(stack);
                int val2 = pop(stack);
                switch(exp[i]){
                    case '+':
                        push(val2+val1);
                        break;
                    case '-':
                        push(val2-val1);
                        break;
                    case '*':
                        push(val2 * val1);
                        break;
                    case '/':
                        push(val2/val1);
                        break;
                }
            }
        }
    
    return pop();

}

int main()
{
    char exp[MAX_EXPR_SIZE];

    printf("Enter the postfix Expression: ");
    scanf("%s", exp);

    printf("Postfix Evaluation: %d", evaluatePostfix(exp));
    return 0;
}