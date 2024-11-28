#include <stdio.h>

int main() {
    
    int array[5] = {1, 2, 6, 7, 9};

    int n = 0;

    printf("cac so chan cua mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
            n = 1;
        }
    }

    if (!n) {
        printf("mang ko co so chan.\n");
    } else {
        printf("\n");
    }

    return 0;
}
