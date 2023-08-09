#include <stdio.h>

float polysolve(float poly[], int pow, int x){
    if(pow == 0)
        return poly[0];
    return (polysolve(poly,pow-1,x)*x) + poly[pow];
}

int main(){
    int n,i;
    float poly[50];
    float x;
    printf("Enter the order of the equation:");
    scanf("%d", &n);
    for(i=n;i>=0;i--)
    {
        printf("Enter the coefficient of %d order:", i);
        scanf("%f", &poly[i]);
    }
    printf("Enter the value of x:");
    scanf("%f", &x);

    float sol = polysolve(poly,n,x);

    printf("The value is %f", sol);

}