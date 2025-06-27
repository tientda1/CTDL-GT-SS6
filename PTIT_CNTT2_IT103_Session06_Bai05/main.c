#include <stdio.h>

int findMax(int arr[],int size,int i) {
    if (i == size -1) {
        return arr[i];
    }
    int max = findMax(arr,size,i+1);
    return (arr[i]>max) ? arr[i] : max;
}
int findMin(int arr[],int size,int i) {
    if (i == size -1) {
        return arr[i];
    }
    int min = findMin(arr,size,i+1);
    return (arr[i]<min) ? arr[i] : min;
}
int main(void) {
    int n;
    printf("Nhap so luong phan tu cho mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu cho mang: ");
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr,n,0);
    int min = findMin(arr,n,0);
    printf("Max = %d\nMin = %d\n", max, min);
    return 0;
}