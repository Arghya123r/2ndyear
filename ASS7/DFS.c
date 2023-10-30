#include<stdio.h>
#include<stdlib.h>

int  Graph[8][8]={
	{0,1,1,0,0,0,0,0},
	{1,0,0,1,1,0,0,0},
	{1,0,0,0,0,1,1,0},
	{0,1,0,0,0,0,0,1},
	{0,1,0,0,0,0,0,1},
	{0,0,1,0,0,0,0,1},
	{0,0,1,0,0,0,0,1},
	{0,0,0,1,1,1,1,0}
};
int visited[8] = {0,0,0,0,0,0,0,0};

void DFS(int i){
	printf("%d ", i+1);
	visited[i] = 1;
	for(int j=0; j<8; j++){
		if(Graph[i][j] && !visited[j]){
			DFS(j);
		}
	}
}

int main(){
	printf("Depth First Search:\n");
	DFS(0);
	printf("\n");
	return 0;
}
