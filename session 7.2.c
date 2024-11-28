#include <stdio.h>

int main() {
    int array[5];

    printf("nhap 5 so nguyen :\n");
    for (int i = 0; i < 5; i++) {
        printf("N %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("cac phan tu cua mang la:\n");
    for (int i = 0; i < 5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}
