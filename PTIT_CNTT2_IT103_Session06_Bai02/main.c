#include <stdio.h>

int getFibonacci(int n) {
    if (n ==0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return getFibonacci(n-1) + getFibonacci(n-2);
}
int main(void){
    int n;
    printf("Nhap vao so luong so fibonaci: ");
    scanf("%d", &n);

    for (int i = n-1; i >= 0; i--) {
        printf("%d ", getFibonacci(i));
    }
    return 0;
}