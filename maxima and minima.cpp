#include <stdio.h>
int find_max(int[], int);
int find_min(int[], int);

int main() 
{
    int n, i, num[100], max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &num[i]);
    }
    max = find_max(num, n);
    min = find_min(num, n);
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
int find_max(int arr[], int n) 
{
    int i, max = arr[0];
    for (i = 1; i < n; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }
    return max;
}
int find_min(int arr[], int n) 
{
    int i, min = arr[0];
    for (i = 1; i < n; i++) 
	{
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }
    return min;
}

