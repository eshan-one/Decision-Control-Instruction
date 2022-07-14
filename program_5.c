#include<stdio.h>
int main(){
    int x ;
    printf("Enter a number: \n");
    scanf("%d", &x);

    if (x>=100 && x< 1000){
        printf("The number is a 3-digit number.");
    }

    else{
        printf("It is not a 3-digit number");
    }

    return 0;
}