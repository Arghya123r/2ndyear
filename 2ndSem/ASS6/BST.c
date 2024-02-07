#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode *root, *temp, *ptr;

void insert(int data) {
    temp = (TreeNode*)malloc(sizeof(TreeNode));
    temp->data = data;
    temp->left = temp->right = NULL;

    if (!root) {
        root = temp;
        return;
    }

    ptr = root;
    while (1) {
        if (data < ptr->data) {
            if (!ptr->left) {
                ptr->left = temp;
                return;
            }
            ptr = ptr->left;
        } else if (data > ptr->data) {
            if (!ptr->right) {
                ptr->right = temp;
                return;
            }
            ptr = ptr->right;
        } else {
            free(temp);
            return;
        }
    }
}

void inorderTraversal() {
    if (!root) return;
    TreeNode* stack[1000];
    int top = -1;
    ptr = root;

    while (top >= 0 || ptr) {
        while (ptr) {
            stack[++top] = ptr;
            ptr = ptr->left;
        }

        ptr = stack[top--];
        printf("%d ", ptr->data);
        ptr = ptr->right;
    }
}

void preorderTraversal() {
    if (!root) return;
    TreeNode* stack[1000];
    int top = -1;
    stack[++top] = root;

    while (top >= 0) {
        ptr = stack[top--];
        printf("%d ", ptr->data);

        if (ptr->right) stack[++top] = ptr->right;
        if (ptr->left) stack[++top] = ptr->left;
    }
}

void postorderTraversal() {
    if (!root) return;
    TreeNode* stack1[1000];
    TreeNode* stack2[1000];
    int top1 = -1, top2 = -1;

    stack1[++top1] = root;

    while (top1 >= 0) {
        ptr = stack1[top1--];
        stack2[++top2] = ptr;

        if (ptr->left) stack1[++top1] = ptr->left;
        if (ptr->right) stack1[++top1] = ptr->right;
    }

    while (top2 >= 0) {
        printf("%d ", stack2[top2--]->data);
    }
}

int main() {
    int choice, data;

    while (1) {
        printf("\n1 for Insert");
        printf("\n2 for Inorder Traversal");
        printf("\n3 for Preorder Traversal");
        printf("\n4 for Postorder Traversal");
        printf("\n5 for Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insert(data);
                break;
            case 2:
                printf("Inorder Traversal: ");
                inorderTraversal();
                printf("\n");
                break;
            case 3:
                printf("Preorder Traversal: ");
                preorderTraversal();
                printf("\n");
                break;
            case 4:
                printf("Postorder Traversal: ");
                postorderTraversal();
                printf("\n");
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
