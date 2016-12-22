#include<bits/stdc++.h>
using namespace std;
int arr[10000005];
	int L[10000007], R[10000005];
long long int merge(int arr[], int l, int m, int r);
long long int mergeSort(int arr[], int n)
{
	long long int ans=0;
int curr_size; // For current size of subarrays to be merged
				// curr_size varies from 1 to n/2
int left_start; // For picking starting index of left subarray
				// to be merged

// Merge subarrays in bottom up manner. First merge subarrays of
// size 1 to create sorted subarrays of size 2, then merge subarrays
// of size 2 to create sorted subarrays of size 4, and so on.
for (curr_size=1; curr_size<=n-1; curr_size = 2*curr_size)
{
	// Pick starting point of different subarrays of current size
	for (left_start=0; left_start<n-1; left_start += 2*curr_size)
	{
		// Find ending point of left subarray. mid+1 is starting 
		// point of right
		int mid = left_start + curr_size - 1;

		int right_end = min(left_start + 2*curr_size - 1, n-1);

		// Merge Subarrays arr[left_start...mid] & arr[mid+1...right_end]
		ans+=merge(arr, left_start, mid, right_end);
	}
}
return ans;
}

/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
long long int merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */


	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1+ j];
long long int c=0;
	/* Merge the temp arrays back into arr[l..r]*/
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			c+=n1-i;
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
	return c;
}
/* Driver program to test above functions */
int main()
{
	ios_base:: sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		long long int count;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		cin>>arr[i];
		count=mergeSort(arr, n);
		cout<<count<<endl;
	}
			return 0;

}
