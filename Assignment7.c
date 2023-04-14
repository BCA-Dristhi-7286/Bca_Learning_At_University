//Write a code find the length of a string and its reverse equivalent without using readymade c functions

#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of the string
    while (str[len] != '\0') {
        len++;
    }

    printf("Length of string: %d\n", len);

    // Reverse the string
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reverse string: %s\n", str);

    return 0;
}

