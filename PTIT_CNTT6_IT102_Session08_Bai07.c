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
    printf("Nhap %d phan tu cua mang (chi nhap so le):\n", n);
    for(int i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                printf("Vui long nhap so le!\n");
            }
        } while (arr[i] % 2 == 0);
    }
    printf("Mang vua nhap la: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}