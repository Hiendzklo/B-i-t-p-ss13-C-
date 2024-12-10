#include <stdio.h>

void nhapMaTran(int rows, int cols, int maTran[rows][cols]) {
    printf("Nhap gia tri cho ma tran (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Nhap phan tu tai [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMaTran(int rows, int cols, int maTran[rows][cols]) {
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    int maTran[rows][cols];
    nhapMaTran(rows, cols, maTran);
    inMaTran(rows, cols, maTran);
    return 0;
}

