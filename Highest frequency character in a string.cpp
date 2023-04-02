#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int freq[256] = {0}, maxFreq = -1, i, len;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

    for(i = 0; i < len; i++)
    {
        if(freq[str[i]] > maxFreq)
        {
            maxFreq = freq[str[i]];
        }
    }

    printf("Max repeated character in the string = ");

    for(i = 0; i < len; i++)
    {
        if(freq[str[i]] == maxFreq)
        {
            printf("%c ", str[i]);
            printf("It occurs %d times\n", maxFreq);
            break;
        }
    }

    return 0;
}

