#include <stdio.h>

int recurtion(int n) {
    if (n ==0) {
        return 0;
    }
    return (n % 10) + recurtion(n / 10);
}
int main() {
    int n;

    printf("Nhap vao 1 so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap vao 1 so nguyen duong.\n");
    } else {
        int sum = recurtion(n);
        printf("Tong cac chu so  %d la: %d\n", n, sum);
    }

    return 0;
}