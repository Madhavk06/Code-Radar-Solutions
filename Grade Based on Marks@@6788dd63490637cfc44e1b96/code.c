#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=90){
        printf("A");
    }
    elseif(a<90 && a>=80){
        printf("B");
    }
     
    elseif(a<80 && a>=70){
        printf("C");
    }
    elseif(a>=60 && a<70){
        printf("D");
    }
    elseif(a<60){
        printf("F");
    }

    return 0;
}