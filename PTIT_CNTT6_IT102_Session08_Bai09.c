#include <stdio.h>

int main() {
    int rows, cols;
    printf("Nhap so hang cua mang 2 chieu: ");
    scanf("%d", &rows);
    printf("Nhap so cot cua mang 2 chieu: ");
    scanf("%d", &cols);
    if (rows <= 0 || rows > 10 || cols <= 0 || cols > 10) {
        printf("So hang va so cot phai nam trong khoang tu 1 den 10!\n");
        return 1;
    }
    int arr[10][10];
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Nhap phan tu thu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nCac phan tu nam tren duong bien cua ma tran la: ");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    return 0;
}