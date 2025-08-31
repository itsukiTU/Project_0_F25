#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void rand_string(char *str, size_t size); 

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         rand_string(s, size);
     }
     return s;
}

int main()
{
    char *str;
    size_t size = 12;

	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
    str = rand_string_alloc(size);
    printf("%s",str);
    free (str);
    
	return(0);
}