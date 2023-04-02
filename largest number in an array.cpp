#include<conio.h>
int main()
{
    int arr[100], n, i, small, large;
    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    large = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > large)
        large = arr[i];
    }
    printf("\nLargest element is : %d", large);
    return 0;
}

