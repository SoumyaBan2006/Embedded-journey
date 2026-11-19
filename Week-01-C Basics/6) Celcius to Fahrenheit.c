#include<stdio.h>
#include<stdlib.h>
int main(){
    int C;
    float F;
    printf("Enter your temperature in Celcius : ");
    scanf("%d",&C);
    F=((9*C/5)+32);
    printf("Your temperature in Fahrenheit is : %f ",F);
    return 0;
}