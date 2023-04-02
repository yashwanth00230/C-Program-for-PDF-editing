#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int len1, len2, i, j, found, not_found;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("Strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; i < len1; i++)
    {
        found = 0;
        for (j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }
    printf("Strings are anagrams.\n");
    return 0;
}

