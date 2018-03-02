#include <stdio.h>

int binarySearch(int list[], int array_size, int item);

int binarySearch(int list[], int array_size, int item) {
	int low = 0;
	int high = array_size - 1;
	int mid, guess;

	while(low <= high) {
		mid = low + high;
		guess = list[mid];

		if(guess == item) {
			printf("%d", mid);
		}

		if(guess > item) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}

	if(guess != item) {
		printf("Item %d not found in the list.",item);
	}

	return 0;
}

int main() {
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arraySize = sizeof(array) / sizeof(int);
	binarySearch(array, arraySize, 0);
	binarySearch(array, arraySize, 5);
}
