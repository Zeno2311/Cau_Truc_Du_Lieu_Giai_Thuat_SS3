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
    printf("moi ban nhap so hang: ");
    scanf("%d",&r);
    printf("moi ban nhap vao so cot: ");
    scanf("%d",&c);
    // Kiem tra dieu kien nhap vao
    checkValue(r, c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("moi ban nhap [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // lay ra so lon nhat va so nho nhat
    int max, min;
    max = min = arr[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    printf("max = %d", max);
    printf("\n");
    printf("min = %d", min);

    return 0;
}


