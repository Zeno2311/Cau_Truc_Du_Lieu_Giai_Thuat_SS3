#include <stdio.h>

void checkValue(int r, int c) {
    while (c > 1000 || r > 1000) {
        printf(" so luong da vuot qua gioi han cho phep !!!!");
        printf("\n");
        printf("vui long nhap lai hang (rows): ");
        scanf("%d",&r);
        printf("vui long nhap lai so cot (cols): ");
        scanf("%d",&c);
    }
    while (r == 0 && c == 0) {
        printf("so cot va so hang khong hop le !!!");
        printf("\n");
        printf("vui long nhap lai so hang (rows): ");
        scanf("%d",&r);
        printf("vui long nhap lai so cot (cols): ");
        scanf("%d",&c);
    }
    while (r <= 0) {
        printf("so hang khong phu hop le");
        printf("\n");
        printf("vui long nhap lai so hang(rows): ");
        scanf("%d", &r);
    }
    while (c <= 0) {
        printf("so cot khong hop le");
        printf("\n");
        printf("vui long nhap lai so cot (cols): ");
        scanf("%d", &c);
    }
}

int main() {
    int r, c;
    printf("vui long nhap vao so hang(rows): ");
    scanf("%d",&r);
    printf("vui long nhap vao so cot (cols): ");
    scanf("%d",&c);
    checkValue(r, c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int k;
    int sum = 0;
    printf("hang ban muon tinh tong: ");
    scanf("%d",&k);
    while (k > r) {
        printf("hang can tinh khong ton tai !!!");
        printf("\n");
        printf("vui long nhap lai hang can tinh: ");
        scanf("%d",&k);
    }
    for (int i = 0; i < c; i++) {
        sum += arr[k][i];
    }
    printf("sum = %d", sum);
    return 0;
}