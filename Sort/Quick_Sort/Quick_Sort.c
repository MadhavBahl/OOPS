// Quicksort algorithm

#include <stdio.h>


// Function to print an array
void printArray(int arr[], int n){		
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Function to swap two elements in an array
void swap(int arr[], int i, int j){

	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

}

// Function to put the pivot element at it's right position in the array
int partition(int arr[], int low, int high){

	// The pivot element (here the first element of the array)
	int pivot = arr[low];

	int i = high + 1;

	for(int j = high; j >= low + 1; j--){

		if(arr[j] >= pivot){
			i--;
			swap(arr, i, j);
		}
	}

	swap(arr, i - 1, low);
	return (i - 1);

}



// Function that recursively sorts the array
void quickSort(int arr[], int low, int high){

	int pi;

	if(low < high){
		pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}



int main(){

	int n;
	scanf("%d", &n);
	int arr[n];
	// Building the array
	for(int i = 0; i < n; i++){		
		scanf("%d", &arr[i]);
	}

	printf("Original array : ");
	printArray(arr, n);
	quickSort(arr, 0, n - 1);
	printf("Sorted array : ");
	printArray(arr, n);

	return 0;

}