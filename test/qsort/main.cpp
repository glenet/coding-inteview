#include <include/QuickSort.h>
#include <iostream>
using namespace std;

int main (int argc, char** argv)
{
	int arr[] = {5, 4, 7, 2, 1, 9, 3, 6, 10, 8};
	QuickSort<int> sort;
	sort.doSort(arr, 10, 0, 9);
	cout << arr << endl;

	return 1;
}
