#include <stdio.h>

main() {
    int n, i, j, count;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {
        count = 1; 

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count = 0;
                break;
            }
        }

        if (count)
            printf("%d ", i);
    }

    printf("\n");

   
}

