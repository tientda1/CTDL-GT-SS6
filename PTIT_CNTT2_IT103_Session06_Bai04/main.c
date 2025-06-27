#include <stdio.h>

int toh(int n, int colA, int colB, int colC) {
    if (n == 0) {
        return 0;
    }
    toh(n-1, colA, colC, colB);
    printf("di chuyen tu %c den %c \n",colA,colC);
    toh(n-1, colB, colA, colC);
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("Dia 1 di chuyen tu A sang C");
        return 0;
    }
    toh(n, 'A', 'B', 'C');
    return 0;
}