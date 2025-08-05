#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So phan tu phai nam trong khoang tu 1 den 100!\n");
        return 1;
    }
    int arr[n];
    printf("Nhap %d phan tu cua mang:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return 0;
}