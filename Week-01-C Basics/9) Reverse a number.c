#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,rev=0,temp;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        rev=(rev*10)+(temp%10);
        temp=temp/10;
    }
    printf("The reverse of %d is %d.",num,rev);
    return 0;
}