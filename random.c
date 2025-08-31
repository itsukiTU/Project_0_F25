#include <stdlib.h> // For rand()
#include <time.h>   // Not strictly needed here, but good practice

void rand_string(char *str, size_t size) {
    // Define the character set from which to choose random letters
    const char charset[] = "abcdefghijklmnopqrstuvwxyz";
    // Calculate the size of the charset array (-1 to exclude the null terminator)
    const int charset_size = sizeof(charset) - 1;

    // Check for a valid size
    if (size == 0) {
        str[0] = '\0'; // Just make it an empty string
        return;
    }

    // Generate 'size' random characters
    for (size_t n = 0; n < size; n++) {
        int key = rand() % charset_size; // Get a random index within the charset bounds
        str[n] = charset[key];           // Assign the random character to the string
    }
    str[size] = '\0'; // Null-terminate the string
}
