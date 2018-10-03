// MergeSort


#include <stdio.h>
#include <limits.h>

// Function to print the array
void printArray(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Funtion to merge the arrays in increasing order
void merge(int arr[], int p, int q, int r){
	
	// calculate size of the two arrays
	int n1 = q - p + 1;
	int n2 = r - q;

	// make two new temporary arrays
	int L[n1], R[n2];

	// copy elements in temporary arrays
	for(int i = 0; i < n1; i++){
		L[i] = arr[p + i];
	}

	for(int j = 0; j < n2; j++){
		R[j] = arr[q + 1 + j];
	}

	// i for left array, j for right array and k for original array
	int i = 0, j = 0, k = p;

	// until one of the temporary arrays are empty
	while(i < n1 && j < n2){

		if (L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}
		else{
			arr[k] = R[j];
			j++;
		}

		k++;
	}

	// if elements left in left array
	while (i < n1){
		arr[k] = L[i];
		i++;
		k++;
	}

	// if elements left in right array
	while (j < n2){
		arr[k] = R[j];
		j++;
		k++;
	}

}


// Function that divides the arrays
void mergeSort(int arr[], int p, int r){

	// If array is still divisible
	if (p < r){

		// find middle point
		int q = (p + r)/2;

		// further divide the left and right arrays
		mergeSort(arr, p, q);
		mergeSort(arr, q + 1, r);

		// merge them back together
		merge(arr, p, q, r);
	}
}


int main(){

	int n;
	scanf("%d", &n);
	int arr[n];
	// Building the array
	for(int i = 0; i < n; i++){
		scanf(" %d", &arr[i]);
	}

	printf("Original array : ");
	printArray(arr, n);

	mergeSort(arr, 0, n - 1);

	printf("Sorted array : ");
	printArray(arr, n);

	return 0;
}