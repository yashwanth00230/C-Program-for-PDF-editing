#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int sum = 0;
    
    printf("Enter a string: ");
    gets(str); 
    
    for(int i=0; i<strlen(str); i++) {
        sum += (int) str[i]; 
    }
    
    printf("Sum of ASCII values of all characters in the string: %d", sum);
    
    return 0;
}

