#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define max(x,y) (((x)>(y)) ? (x) : (y))

 typedef struct{
 	float coeff;
 	int power;
 }poly;

 void addpoly(poly arr1[], poly arr2[], int len1, int len2, poly result[])
 {
	int i = 0, j = 0, k =0;
	
	while(i<len1 && j<len2){
	 	if(arr1[i].power < arr2[j].power)
	 		result[k++] = arr2[j++];
	 	else if(arr1[i].power > arr2[j].power)
	 		result[k++] = arr1[i++];
	 	else if(arr1[i].power == arr2[j].power){
	 		result[k].coeff = arr1[i].coeff + arr2[j].coeff;
	 		result[k].power = arr1[i].power;
	 		k++; i++; j++;
	 	}
	 }

	 while(i<len1){
	 	result[k++] = arr1[i++];
	 }
	 while(j<len2){
	 	result[k++] = arr2[j++];
	 }
 }

 void printpoly(poly arr[], int len){
 	int i;
 	
	for(i = 0;i<len;i++){
		if(arr[i].coeff > 1){
			printf("+%fx^%d", arr[i].coeff, arr[i].power);
		}
		else if(arr[i].coeff < -1){
			printf("-%dx^%d", abs(arr[i].coeff), arr[i].power);
		}
		else if(arr[i].coeff == 1){
			printf("+x^%d", arr[i].power);
		}
		else if(arr[i].coeff == -1){
			printf("-x^%d", arr[i].power);
		}
	}
	
	printf("\n");
 }

 int getpoly(poly arr[]){
	int i = 0;
	float c;
	printf("Enter the the coefficient(Enter -9999 to move on): ");
	scanf("%.000f", &c);
	
	while(c != -9999){
		arr[i].coeff = c;
		printf("\nEnter the power of coefficient %.000f:", arr[i].coeff);
		scanf("%d", arr[i].power);
		i++;
		printf("\nEnter the coefficient(Enter -9999 to move on): ");
		scanf("%.000f", &c);
	}
	
	return i;
}

 int main()
 {
 	poly pol1[MAX];
 	poly pol2[MAX];
 	poly pol3[MAX];
	
	int len1 = getpoly(pol1);
	printf("The first polynomial is : ");
	printpoly(pol1,len1);

	int len2 = getpoly(pol2);
	printf("The second polynomial is : ");
	printpoly(pol2, len2);

	int len3 = max(len1,len2);

	addpoly(pol1,pol2,3,3,pol3);
	printpoly(pol3, len3);
	
	return 0;
 }
