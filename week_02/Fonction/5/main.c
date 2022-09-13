/* C program for Merge Sort */
#include <stdio.h>
#include <stdlib.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
   printf(" ************* debut **************\n\n");
	int i, j, k;
	int n1 = m - l + 1;
	/* create temp arrays */
	int n2 = r - m;

	printf("l = %d   m = %d   r = %d  n1 = %d  n2 = %d\n",l,m,r,n1,n2);

	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++){
       L[i] = arr[l + i];
    printf("L[%d] = %d   arr[%d] = %d\n",i,L[i],l + i,arr[l + i]);
	}
	for (j = 0; j < n2; j++){
        R[j] = arr[m + 1 + j];
    printf("R[%d] = %d   arr[%d] = %d\n",j,R[j],m + 1 + j,arr[m + 1 + j]);
	}


	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			printf("L[%d] = %d   arr[%d] = %d\n",i,L[i],k,arr[k]);
			i++;
		}
		else {
			arr[k] = R[j];
			printf("R[%d] = %d   arr[%d] = %d\n",j,R[j],k,arr[k]);
			j++;
		}
		k++;
	}
	printf("               debut  \n");

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr[k] = L[i];
		printf("L[%d] = %d   arr[%d] = %d\n",i,L[i],k,arr[k]);
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
        printf("R[%d] = %d   arr[%d] = %d\n",j,R[j],k,arr[k]);
		arr[k] = R[j];
		j++;
		k++;
	}
	printf("               fin  \n");
	printf("\n\n ************* fin **************\n\n\n");
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		printf(" ****** 1 ******\n");
		printf("l = %d    r = %d  m = %d\n",l,r,m);
		mergeSort(arr, l, m);
		printf(" ****** 2 ******\n");
		mergeSort(arr, m + 1, r);
		printf(" ****** 3 ******\n");

		merge(arr, l, m, r);
	}
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

/* Driver code */
int main()
{
	int arr[] = { 12,-1,4,0 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0;
}
