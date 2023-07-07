#include <stdlib.h>
#include <stdio.h>
#define arraySize 5

void insertionSort(int arr[], int size);

int main() {
	int dataSet[arraySize] = { 1,9,5,3,2 };
	
	insertionSort(&dataSet, arraySize);
	return 0;

}

void insertionSort(int arr[], int size) {
	//for each elem i(1) in arr, check if greater than i+1..., if so, shift
	int elem, i, j;
	for (i = 1; i < size; i++) {
		elem = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > elem) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = elem;
		}
	for (int k = 0; k < size; k++) {

		printf("%d", arr[k]);
	}
	}