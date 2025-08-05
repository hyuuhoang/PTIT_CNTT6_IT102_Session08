#include <stdio.h>

int main() {
    int arr[5] = {10, 7, 14, 3, 9};
    int arrOld[5];
    for(int i = 0; i < 5; i++) {
        arrOld[i] = arr[i];
    }
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            arr[i] += 3;
        } else {
            arr[i] += 2;
        }
    }
    printf("Mang cu la: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arrOld[i]);
    }
    printf("\n");
    printf("Mang moi sau khi thay doi la: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}