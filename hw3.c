#include <stdio.h>

int main(void) {
    
    int i, j, k;
    
    for(i = 0; i < 5; i++) {

        for(j = i; j < 4; j++) {
            printf(" ");
        }

        for(k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        printf("\n");
    }
    
    
}
