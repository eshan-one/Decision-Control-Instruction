#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);
    if (x>0){
        printf("Number is Positive");

    }

    if(x<=0){
        printf("Number is Non-Positive");
    }

    return 0;
}