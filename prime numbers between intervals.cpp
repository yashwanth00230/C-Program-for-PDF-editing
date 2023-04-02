#include <stdio.h>
int checkPrime(int num);
int main()
{
    int low, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);

    for(i = low + 1; i < high; ++i)
    {
        flag = checkPrime(i);

        if(flag == 1)
            printf("%d ", i);
    }

    return 0;
}
int checkPrime(int num)
{
    int j, flag = 1;

    for(j = 2; j <= num/2; ++j)
    {
        if(num % j == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

