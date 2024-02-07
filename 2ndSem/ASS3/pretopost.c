#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
  
#define MAX_EXPR_SIZE 100

char stack[MAX_EXPR_SIZE];
int top = -1;

void push(char* elem){
    if(top == MAX_EXPR_SIZE){
        printf("Error:Stack Overflow");
    }
    else{
        top++;
        stack[top]= *elem;
    }

}


char pop(){
    int x;
    if(top < -1){
        printf("Error: Empty Stack");
        return 0;;
    }
    else{
        return stack[top--];
    }
}


int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/'
            || ch == '^');
}

char* pretopost(char* str){
    int len = strlen(str);
    char s1,s2,temp[MAX_EXPR_SIZE];
    int i;
    for(i=len;i>=0;i--){
        if(isOperator(str[i])){
            s1 = pop();
            s2 = pop();
            strcat(temp, &s1);
            strcat(temp, &s2);
            strcat(temp, &str[i]);
            push(temp);
        }
        else
            push(&str[i]);
    }

    return str;
}

int main()
{
    char pre_exp[] = "*-A/BC-/AKL";
    char* post_fix = pretopost(pre_exp);
    printf("Postfox: %s \n", post_fix);
    return 0;
}