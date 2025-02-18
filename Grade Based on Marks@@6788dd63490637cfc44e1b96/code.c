#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a >= 90) {
        printf("A");
    } 
    else if (a >= 80) {  // No need to check 'a < 90' since previous condition already excludes it
        printf("B");
    } 
    else if (a >= 70) {  // Similarly, 'a < 80' is implied
        printf("C");  // Fixed inconsistent capitalization
    } 
    else if (a >= 60) {
        printf("D");
    } 
    else {
        printf("F");
    }

    return 0;
}
