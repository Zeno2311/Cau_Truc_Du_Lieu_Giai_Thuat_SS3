#include  <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so luong phan tu co trong mang: ");
    scanf("%d", &n);
    while (n <= 0) {
        printf("So luong phan tu khong duoc am");
        printf("\n");
        printf("Vui long nhap lai so luong phan tu: ");
        scanf("%d", &n);
    }
    while (n == 0) {
        printf("So luong phan tu phai khac 0");
        printf("\n");
        printf("Vui long nhap lai so luong phan tu: ");
        scanf("%d", &n);
    }
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Lay ra phan tu lon nhat
    int checkMax;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (arr[i] > arr[j]) {
                checkMax = arr[i];
            }
        }
    }
    printf("Phan tu lon nhat trong mang: ");
    printf("Max = %d", checkMax);
    printf("\n");
    return 0;
}
