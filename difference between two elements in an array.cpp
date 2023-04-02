#include <bits/stdc++.h>
using namespace std;
int maxDiff(int arr[], int arr_size)
{	
int max_diff = arr[1] - arr[0];
for (int i = 0; i < arr_size; i++)
{
	for (int j = i+1; j < arr_size; j++)
	{	
	if (arr[j] - arr[i] > max_diff)
		max_diff = arr[j] - arr[i];
	}
}		
return max_diff;
}
int main()
{
int arr[] = {10, 15, 90, 200, 110};
int n = sizeof(arr) / sizeof(arr[0]);
cout << "Maximum difference is " << maxDiff(arr, n);

return 0;
}
