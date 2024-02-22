#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare variables
    char input[1000]; // Assuming the input won't exceed 1000 characters
    FILE *filePointer;

    // Read input from the user
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Open file for writing
    filePointer = fopen("user_input.o", "w");
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1; // Exit program with error
    }

    // Write the input to the file
    fprintf(filePointer, "%s", input);

    // Close the file
    fclose(filePointer);

    printf("Input has been written to user_input.o successfully.\n");

    return 0; // Exit program successfully
}
