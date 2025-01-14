#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *accum(const char *source) {
    // Step 1: Calculate the size of the output string
    int length = 0;
    for (int i = 0; source[i] != '\0'; i++) {
        length += (i + 1); // Each character is repeated (i + 1) times
    }
    length += strlen(source); // Add space for dashes between groups
    length += 1; // Null terminator

    // Step 2: Allocate memory for the output string
    char *output = (char *)malloc(length * sizeof(char));
    if (!output) {
        return NULL; // Handle memory allocation failure
    }

    // Step 3: Build the output string
    int outputIndex = 0;
    for (int i = 0; source[i] != '\0'; i++) {
        for (int curr = 0; curr < (i + 1); curr++) {
            if (curr == 0) {
                output[outputIndex++] = toupper(source[i]);
            } else {
                output[outputIndex++] = tolower(source[i]);
            }
        }
        if (source[i + 1] != '\0') {
            output[outputIndex++] = '-'; // Add a dash between groups
        }
    }

    // Step 4: Null-terminate the output string
    output[outputIndex] = '\0';

    return output;
}

int main() {
    const char *input = "abcd";
    char *result = accum(input);
    if (result) {
        printf("Output: %s\n", result);
        free(result); // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
