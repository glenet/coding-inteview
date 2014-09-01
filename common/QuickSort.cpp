#include <include/QuickSort.h>

template <class T>
QuickSort<T>::QuickSort()
{

}

template <class T>
void QuickSort<T>::doSort(T* arr, int size, int left, int right)
{
	int pivot = 0;

	pivot = partition(arr, size, left, right);
	if (pivot > 0)
		doSort(arr, pivot - left + 1, left, pivot);
	if (pivot > 0)
		doSort(arr, right - pivot + 1, pivot, right);
}

template <class T>
QuickSort<T>::~QuickSort()
{

}

template <class T>
int QuickSort<T>::partition(T *arr, int size, int left, int right)
{
	int pivot = 0;
	int sortedIndex = 0;

	if (left >= right)
		return -1;
	for (int i = 0; i < size; i++) {
		pivot = 0;
		sortedIndex = pivot + 1;
		for (int j = sortedIndex; j < size; j++) {
			if (arr[j] < arr[pivot])
				swap(arr[sortedIndex], arr[j]);
				sortedIndex++;
		}
		swap(arr[sortedIndex - 1], arr[pivot]);
	}
	return sortedIndex - 1;
}
