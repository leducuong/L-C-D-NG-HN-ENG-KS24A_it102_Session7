#include <stdio.h>

int main() {
    int array[5] = {10, 5, 20, 15, 8};

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < 5; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("phan lon nhat cua mang : %d\n", max);
    printf("phan nho nhat cua mang: %d\n", min);

    return 0;
}
