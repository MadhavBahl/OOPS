// Jump Search

#include <stdio.h>
#include <math.h>


// Helper function
int min(int a, int b){
	return (a < b) ? a : b;
}


// Jump Search Function
int jumpSearch(int arr[], int n, int x){

	// step size
	int step = sqrt(n);

	int prev = 0;


	// checks for the block where element is present
	// or else returns -1 if is not present
	while(arr[min(step, n) - 1] < x){
		prev = step;
		step += sqrt(n);
		if(prev >= n){
			return -1;
		}
	}

	// checks whether the element is present in that block
	while(arr[prev] < x){
		prev++;

		if(prev == min(step, n)){
			return -1;
		}
	}

	// return the element's index
	if(arr[prev] == x){
		return prev;
	}	

	return -1;

}


int main(){

	// a sorted array
	int arr[] = {1, 2, 4, 9, 7, 45, 68, 69, 71, 72, 73, 76, 79, 84, 89, 94, 97, 98, 100};
	
	// element
	int x = 76;

	int index = jumpSearch(arr, sizeof(arr)/ sizeof(arr[0]), x);
	printf("Index of %d is %d\n", x, index);

	return 0;
}