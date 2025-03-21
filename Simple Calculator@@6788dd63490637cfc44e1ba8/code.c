#include<stdio.h>
int main(){
    int a,b;
    char c;
    int sum;
    int divide;
    int minus;
    int mul;
    scanf("%d %d %c",&a,&b,&c);
    sum =a+b;
    divide =a/b;
    mul =a*b;
    minus =a-b;
    if(c== '+'){
        printf("%d",sum);
    }
     else if(c== '-'){
        printf("%d",minus);
    }
    else if(c== '*'){
        printf("%d",mul);
    }
    else if(c== '/'){
        printf("%d",divide);
    }
    return 0;
}