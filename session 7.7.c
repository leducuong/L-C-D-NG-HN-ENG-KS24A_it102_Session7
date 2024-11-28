#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        int temp;
        printf("Nhap phan tu thu %d (phai la so le): ", i + 1);
        scanf("%d", &temp);

        while (temp % 2 == 0) {
            printf("Gia tri khong hop le! Moi nhap lai phan tu thu %d (phai la so le): ", i + 1);
            scanf("%d", &temp);
        }

        arr[i] = temp;
    }
    printf("Mang vua nhap: [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(", "); 
    }
    printf("]\n");

    return 0;
}
