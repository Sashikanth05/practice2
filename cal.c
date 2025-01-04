#include<stdio.h>

int main(){

    int a,b;
    printf("\nEnter the values of a and b:");
    scanf("%d %d",&a,&b);

    int c = a+b;

    printf("\nThe sum of %d and %d is %d",a,b,c);

    return 0;
}