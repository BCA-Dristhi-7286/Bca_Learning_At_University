//Write a C code to find the type of array
//If all elements in the array are odd it is known as "ODD ARRAY"
//if all elements in the array are even it is known as "EVEN ARRAY"
//if both even and odd available it is known as MIXED array


int findType(int n, int *) //complete this function
#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // find length of string
    while (str[len] != '\0') {
        len++;
    }

    printf("Length of string: %d\n", len);

    // reverse string
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
