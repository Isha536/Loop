// pattern4.c
#include <stdio.h>

void main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 5; j >= 6 - i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}
