#include <stdio.h>

int main() {
    char filename[100]; 
    char ch; 
    FILE *file;

    printf("Enter the filename to open: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }
    printf("Contents of the file %s:\n", filename);

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch); // Print each character
    }

    fclose(file);
    return 0;
}
