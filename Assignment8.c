//Write a C code to sort a string in alphabetical order
//input: Anitha
//output: Aahint 

#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 100

int main() {
    char str[MAX_STRING_LENGTH];
    int i, j, len;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // bubble sort algorithm
    for (i = 0; i < len-1; i++) {
        for (j = 0; j < len-i-1; j++) {
            if (str[j] > str[j+1]) {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);

    return 0;
}

