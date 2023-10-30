#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_SIZE 20

typedef struct node{
    char data;
    struct node *lChild;
    struct node *rChild;
}Node;

typedef struct stack{
    Node * data[MAX_SIZE];
    int top;
}Stack;

void initializeStack(Stack *stack1){
    stack1 -> top = -1;
}

int isFull(Stack *stack1){
    return (stack1 -> top == MAX_SIZE-1);
}

int isEmpty(Stack *stack1){
    return (stack1 -> top == -1);
}

void push(Stack *stack1, Node * root){          //Pushing root of the subtree
    if(isFull(stack1)){
        printf("Stack overflow!\n");
        return;
    }
    stack1 -> data[++(stack1 -> top)] = root;
}

Node * pop(Stack * stack1){
    if(isEmpty(stack1)){
        printf("Stack underflow!\n");
        return NULL;
    }
    return stack1 -> data[(stack1 -> top)--];
}

Node * createNode(char data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> lChild = NULL;
    newNode -> rChild = NULL;
    return newNode;
}

Node * createExpressionTree(char postfix[]){
    // int n = sizeof(postfix)/sizeof(postfix[0]);
    Stack nodeStack;
    initializeStack(&nodeStack);
    Node * newSTNode;

    for(int i=0; postfix[i] != '\0'; i++){
        // printf("%c visited\n", postfix[i]);
        if(isdigit(postfix[i])){
            newSTNode = createNode(postfix[i]);
            push(&nodeStack, newSTNode);
        }
        else{
            Node * rSTNode = pop(&nodeStack);
            Node * lSTNode = pop(&nodeStack);
            newSTNode = createNode(postfix[i]);
            newSTNode -> lChild = lSTNode;
            newSTNode -> rChild = rSTNode;
            push(&nodeStack, newSTNode);
        }
    }

    return pop(&nodeStack);
}

void inorder(Node * root){
    if(root){
        inorder(root->lChild);
        printf("%c ", root->data);
        inorder(root->rChild);
    }
}

void postorder(Node * root){
    if(root){
        postorder(root->lChild);
        postorder(root->rChild);
        printf("%c ", root->data);
    }
}

void preorder(Node * root){
    if(root){
        printf("%c ", root->data);
        preorder(root->lChild);
        preorder(root->rChild);
    }
}

int main(){
    // char postfix[] = {'1','2','*','3','/','4','5','/','6','*','+','8','9','*','-'};
    char postfix[MAX_SIZE];
    printf("Enter the postfix expression:");
    scanf("%s", postfix);
    Node * Root = createExpressionTree(postfix);

    printf("Infix Expression(Inorder Traversal):");
    inorder(Root);
    printf("\nPostfix Expression(Postorder Traversal):");
    postorder(Root);
    printf("\nPrefix Expression(Preorder Traversal):");
    preorder(Root);

    return 0;
}