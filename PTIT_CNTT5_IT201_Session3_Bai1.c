#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Moi ban nhap vao so luong phan tu co trong mang: ");
    scanf("%d", &n);
    while ( n <= 0) {
        printf("So luong phan tu khong duoc am");
        printf("\n");
        printf("Vui long nhap lai so luong phan tu: ");
        scanf("%d", &n);
    }
    while (n == 0) {
        printf("So luong phan tu phai lon hon 0");
        printf("\n");
        printf("Vui long nhap lai so luong phan tu: ");
        scanf("%d", &n);
    }
    int *arr = (int *)malloc(n * sizeof(int));
    printf("MOI BAN NHAP CAC GIA TRI CUA PHAN TU");
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("So thu %d: %d", i + 1, arr[i]);
        printf("\n");
    }
    return 0;
}
