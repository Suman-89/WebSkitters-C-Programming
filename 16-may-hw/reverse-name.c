#include <stdio.h>
#include <string.h>

int main() {
    char name[50];  // Ensure the array is large enough to hold the name

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        size_t len = strlen(name);

        // Remove the newline character if it's present
        if (len > 0 && name[len-1] == '\n') {
            name[len-1] = '\0';
            len--;
        }

        // Reverse the string using a loop
        for (size_t i = 0; i < len / 2; i++) {
            char temp = name[i];
            name[i] = name[len - 1 - i];
            name[len - 1 - i] = temp;
        }

        printf("Reversed name: %s\n", name);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
