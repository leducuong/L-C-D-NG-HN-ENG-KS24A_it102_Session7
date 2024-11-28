#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 1) { 
            arr[i] += 2;
        } else { 
            arr[i] += 3;
        }
    }

    printf("[");
    for (int i = 0; i < 10; i++) {
        printf("%d", arr[i]);
        if (i < 9) printf(", "); 
    }
    printf("]\n");

    return 0;
}
