#include<stdio.h>
int main(){
    long int a;
    printf("Enter a number: \n");
    scanf("%ld", &a);
    if (a % 2==0){
        printf("Number is Even");
    }

    else{
        printf("Number is Odd");
    }
}