#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void runLengthEncode(const char *input) {
    int len = strlen(input);
    
    if (len == 0) {
        printf("Encoded string: (empty)\n");
        return;
    }
    
    // Allocate worst-case output size (2*len + 1 for null terminator)
    char *encoded = (char *)malloc(2 * len + 1);
    int encodedIndex = 0;
    
    for (int i = 0; i < len; i++) {
        char currentChar = input[i];
        int count = 1;
        
        // Count consecutive occurrences
        while (i + 1 < len && input[i + 1] == currentChar) {
            count++;
            i++;
        }
        
        // Append character to encoded string
        encoded[encodedIndex++] = currentChar;
        
        // Append count if > 1
        if (count > 1) {
            char countStr[10];
            sprintf(countStr, "%d", count);
            for (int j = 0; j < strlen(countStr); j++) {
                encoded[encodedIndex++] = countStr[j];
            }
        }
    }
    
    encoded[encodedIndex] = '\0'; // Null-terminate
    
    printf("Original string: %s\n", input);
    printf("Encoded string: %s\n", encoded);
    
    free(encoded); // Free allocated memory
}

int main() {
    const char *input = "BBBWWBb"; 
    runLengthEncode(input);
    
    // Additional test cases
    runLengthEncode("AAAAAA");    // A6
    runLengthEncode("XYZ");       // XYZ
    runLengthEncode("");          // (empty)
    
    return 0;
}