#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,fact;
    printf("Enter your number : ");
    scanf("%d",&a);
    b=a;
    fact=1;
    while (b!=1){
        fact=fact*b;
        b=b-1;
    }
    printf("Factorial of %d is : %d",a,fact);
    return 0;
}