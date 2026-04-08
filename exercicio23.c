#include <stdio.h>

void hexadecimal(int n) {
    printf("0x%X\n", n);
}

int main() {
    int num;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        hexadecimal(num);
    }

    return 0;
}