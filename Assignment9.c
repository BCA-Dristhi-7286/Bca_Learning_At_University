//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, j, l, count;
    
    printf("Enter a name: ");
    scanf("%s", name);
    
    l = strlen(name);
    
    for(i=0; i<l; i++) {
        count = 1;
        if(name[i] == '\0') continue;
        for(j=i+1; j<l; j++) {
            if(name[i] == name[j]) {
                count++;
                name[j] = '\0';
            }
        }
        printf("%c - %d\n", name[i], count);
    }
    
    return 0;
}
