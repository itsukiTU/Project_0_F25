#include <stdlib.h> 
#include <time.h> 

void rand_string(char *str, size_t size) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyz";
    const int charset_size = sizeof(charset) - 1;

    if (size == 0) {
        str[0] = '\0';
        return;
    }

    for (size_t n = 0; n < size; n++) {
        int key = rand() % charset_size;
        str[n] = charset[key];
    }
    str[size] = '\0';
}