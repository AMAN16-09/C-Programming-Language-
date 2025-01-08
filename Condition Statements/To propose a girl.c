#include <stdio.h>
#include <string.h>

int main() {
    char answer[10];
    
    printf("Will you go out with me? (yes/no): ");
    scanf("%s", answer);
    
    if (strcmp(answer, "yes") == 0) {
        printf("Yay! I'm the happiest person in the world! 😊\n");
    } 
    else if (strcmp(answer, "no") == 0) {
        printf("Oh no, my heart is broken! 😢\n");
    } 
    else {
        printf("I didn't understand your response, but I'll wait forever! 😅\n");
    }
    
    return 0;
}
