#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if(a>b ){
        if(a>c){
            printf("%d",a);
    }
    else{printf("%d",c);
    }
    }
 if(a!>b && b>c){ 
    printf("%d",b); 
}
    return 0;
}