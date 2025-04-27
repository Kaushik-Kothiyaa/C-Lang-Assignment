#include <stdio.h>

main() {
    FILE *fp;
    char str[] = "Hello World!";
    char buffer[100];

    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    
    fprintf(fp, "%s", str);

    
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    
    printf("Contents of file:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

  
    fclose(fp);

  
}

