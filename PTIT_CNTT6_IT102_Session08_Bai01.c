#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Cac phan tu trong mang la: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n Do dai mang la : %d",length );

    return 0;
}