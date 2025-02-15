#include<stdio.h>
int main (){
    printf("Enter year:");
    scanf("%d",&a);
    if(a%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap Year");
    }
    return 0;
}