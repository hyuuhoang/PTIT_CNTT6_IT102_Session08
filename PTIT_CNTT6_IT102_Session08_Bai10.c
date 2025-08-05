#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    int arr[n];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap %d phan tu cua mang:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Cac phan tu la so nguyen to trong mang la: ");
    int hasPrime = 0;
    for(int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            hasPrime = 1;
        }
    }
    if (!hasPrime) {
        printf("Khong co so nguyen to trong mang.");
    }

    return 0;
}