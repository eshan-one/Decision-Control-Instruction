#include<stdio.h>
int main(){
    int x ;
    printf("Enter a number: \n");
    scanf("%d", &x);
    if((x/2)*2 == x){
        printf("Number is Even");

    }
    else{
        printf("Number is Odd");
    }
}