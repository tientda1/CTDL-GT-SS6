#include <stdio.h>

int recursion(int n) {
    if(n==0) {
        return 0;
    }
    recursion(n/2);
    printf("%d", n%2);
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    recursion(n);
}