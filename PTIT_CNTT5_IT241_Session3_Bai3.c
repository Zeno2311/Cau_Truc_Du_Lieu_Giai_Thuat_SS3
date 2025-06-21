#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Moi ban nhap vao so luong phan tu co trong mang:");
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
    // Tim so chan va tinh tong
    int count = 0;
    int sum = 0, avd;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
            count++;
        }
    }
    if (count == 0) {
        printf("Khong ton tai so chan trong mang");
        printf("\n");
    } else {
        avd = sum / count;
        printf("Trung binh cong cua cac so chan trong mang");
        printf("\n");
        printf("average = %d", avd);
    }
}
