#include <stdio.h>

void selectionSort(int arr[], int n) {
int i, j, max_idx;
	for (i = 0; i < n - 1; i++) {
	//find the maximum element in unsorted array
	max_idx = i;
	for (j = i + 1; j < n; j++) {
		if (arr[j] > arr[max_idx]) {
			max_idx = j;
		}
	}
//swap the found maximumelement with the first element 
	int temp = arr[max_idx];
	arr[max_idx] = arr[i];
	arr[i] = temp;
	}
}

int main() {
    int n;

    // Input number of elements in the array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array in descending order using selection sort
    selectionSort(arr, n);

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}