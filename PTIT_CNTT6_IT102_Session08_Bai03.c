#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 5, 7, 9};
    int hasEven = 0;

    printf("Cac phan tu chan trong mang la: ");
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            hasEven = 1;
        }
    }
    if(!hasEven) {
        printf("Mang khong chua so chan.");
    }

    return 0;
}