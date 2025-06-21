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
    checkValue(r,c);
    int arr[r][c];
    // Kiem tra xem co duong cheo chinh duong cheo phu hay khong
    int sumMain = 0;
    int sumSub = 0;
    if (r == c) {
        for (int i = 0; i < r; i++) {
            for (int j =0; j < c; j++) {
                printf("moi ban nhap [%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        // tinh tong duong cheo chinh va duong cheo phu
        for (int i = 0; i < r; i++) {
            sumMain += arr[i][i];
            sumSub += arr[i][r - i - 1];
        }
        printf("tong duong cheo chinh: %d", sumMain);
        printf("\n");
        printf("tong duong cheo phu %d", sumSub);
    } else {
        printf("khong ton tai iduong cheo chinh !!! \n");
        printf("khong ton tai duong cheo phu !!!");
    }
    return 0;
}