#include <stdio.h>
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
int main()
{
    int n;
    printf("Give the number of elements\n");
    scanf("%d",&n);
	int arr[n];
	printf("Give the elements\n");
	for(int i =0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	insertionSort(arr, n);
	printf("Sorted array is\n");
	printArray(arr, n);
	return 0;
}
/*Output:
Give the number of elements
5
Give the elements
2341
1345311
3134431
3134
90
Sorted array is
90 2341 3134 1345311 3134431
*/