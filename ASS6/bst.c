#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
	int key;
	struct tree *right, *left;
}Tree;

Tree *root = NULL;

Tree* createnode(int val){
	Tree *node = (Tree*)malloc(sizeof(Tree));
	node->key=val;
	node->left=node->right=NULL;
	return node;
}

void insertleaf(Tree *node, int key){
	if(node->key > key){
		if(node->left == NULL)
			node->left = createnode(key);
		else 
			insertleaf(node->left,key);
	}
	else{
		if(node->right == NULL)
			node->right = createnode(key);
		else
			insertleaf(node->right,key);
	}
}

void insert(int val){
	if(root == NULL){
		root = createnode(val);
	}
	else
		insertleaf(root,val);
}

void inorder(Tree *node){
	Tree *prev = NULL;
	Tree current = node;
	while(current != NULL){
		
	}
}

void preorder(Tree *node){
	if(node != NULL){
		printf("%d, ", node->key);
		preorder(node->left);
		preorder(node->right);
	}
}

int main(){
	insert(45);
	insert(6);
	insert(26);
	insert(7);
	insert(89);
	insert(65);
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
	return 0;
}


