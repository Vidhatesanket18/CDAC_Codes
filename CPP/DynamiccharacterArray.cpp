#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int maxStringLength;
    printf("Enter the maximum number of characters: ");
    scanf("%d", &maxStringLength);

    // Consume the newline character left in the input buffer
    getchar();

    // Allocate memory for the dynamic character array
    char *dynamicString = (char *)malloc((maxStringLength + 1) * sizeof(char)); // +1 for the null terminator

    if (dynamicString == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Input a string (up to maxStringLength characters)
    printf("Enter a string (up to %d characters): ", maxStringLength);
    fgets(dynamicString, maxStringLength + 1, stdin);

    // Remove newline character if present
    size_t len = strlen(dynamicString);
    if (len > 0 && dynamicString[len - 1] == '\n') {
        dynamicString[len - 1] = '\0';
    }

    // Display the entered string
    printf("You entered: %s\n", dynamicString);

    // Deallocate the dynamic memory
    free(dynamicString);

    return 0;
}

