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
        printf(sum);
    }
     else if(c== '-'){
        printf(minus);
    }
    else if(c== '*'){
        printf(mul);
    }
    else if(c== '/'){
        printf(divide);
    }
    return 0;
}