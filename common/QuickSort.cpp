#include <algorithm>
#include <iostream>

#include <include/debug.h>
#include <include/QuickSort.h>
using namespace std;

QuickSort::QuickSort()
{

}

QuickSort::~QuickSort()
{

}

void QuickSort::doSort(int arr[], int size, int left, int right)
{
	int pivot = 0;
	if (left < right) {
		pivot = partition(arr, size, left, right);
		doSort(arr, pivot - left + 1, left, pivot - 1);
		doSort(arr, right - pivot + 1, pivot + 1, right);
	}
}

int QuickSort::partition(int arr[], int size, int left, int right)
{
	int pivot = 0;
	int sortedIndex = 0;
	int pivotElement = 0;

	pivot = left;
	sortedIndex = pivot + 1;
	pivotElement = arr[pivot];

	for (int i = sortedIndex; i <= right; i++) {
		if (arr[i] <= pivotElement) {
			swap(arr[i], arr[sortedIndex]);
			sortedIndex++;
		}
	}
	swap(arr[sortedIndex - 1], arr[pivot]);

	return sortedIndex - 1;
}
