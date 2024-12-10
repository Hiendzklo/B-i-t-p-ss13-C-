#include <stdio.h>
#include <stdbool.h>

bool laSoNguyenTo(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void nhapMang(int n, int m, int arr[n][m]) {
    printf("Nhap cac phan tu cua ma tran (%dx%d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMaTran(int n, int m, int arr[n][m]) {
    printf("Ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}

void inCacGoc(int n, int m, int arr[n][m]) {
    printf("Cac phan tu o cac goc:\n");
    printf("%d %d\n", arr[0][0], arr[0][m - 1]);
    printf("%d %d\n", arr[n - 1][0], arr[n - 1][m - 1]);
}

void inDuongBien(int n, int m, int arr[n][m]) {
    printf("Cac phan tu tren duong bien:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%4d", arr[i][j]);
            } else {
                printf("   0");
            }
        }
        printf("\n");
    }
}

void inCheoChinhPhu(int n, int m, int arr[n][m]) {
    printf("Cac phan tu tren duong cheo chinh va phu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == m - 1) {
                printf("%4d", arr[i][j]);
            } else {
                printf("   0");
            }
        }
        printf("\n");
    }
}

void inSoNguyenTo(int n, int m, int arr[n][m]) {
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laSoNguyenTo(arr[i][j])) {
                printf("%4d", arr[i][j]);
            } else {
                printf("   0");
            }
        }
        printf("\n");
    }
}
int main() {
    int n, m;
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);
    int arr[n][m];
    int choice;
    do {
        printf("\nMENU:\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(n, m, arr);
                break;
            case 2:
                inMaTran(n, m, arr);
                break;
            case 3:
                inCacGoc(n, m, arr);
                break;
            case 4:
                inDuongBien(n, m, arr);
                break;
            case 5:
                inCheoChinhPhu(n, m, arr);
                break;
            case 6:
                inSoNguyenTo(n, m, arr);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);
    return 0;
}

