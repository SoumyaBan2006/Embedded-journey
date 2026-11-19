#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    int flag=0;
    for(int i=2;i<=sqrt(a);i++){
        if (a%i==0){
            printf("%d is not a prime number.",a);
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("%d is a prime number.",a);
    return 0;
}