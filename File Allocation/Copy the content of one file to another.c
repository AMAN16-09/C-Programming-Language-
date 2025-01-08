#include <stdio.h>
int main() {
    char sourceFile[100], targetFile[100];
    char ch;
    FILE *source, *target;

    printf("Enter the name of the source file: ");
    scanf("%s", sourceFile);

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Could not open source file %s\n", sourceFile);
        return 1;
    }

    printf("Enter the name of the target file: ");
    scanf("%s", targetFile);

    target = fopen(targetFile, "w");
    if (target == NULL) {
        printf("Could not open target file %s\n", targetFile);
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target); 
    }
    printf("File copied successfully from %s to %s\n", sourceFile, targetFile);
    fclose(source);
    fclose(target);
    return 0;
}
