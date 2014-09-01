#include <include/QuickSort.h>
#include <iostream>
using namespace std;

static void dump(int *list)
{
	cout << " Sorted" << endl;
	for (int i = 0; i < 10; i++)
		cout << list[i] << " ";

}

int main (int argc, char** argv)
{
	int arr[] = {5, 4, 7, 2, 1, 9, 3, 6, 10, 8};
	QuickSort sort;
	sort.doSort(arr, 10, 0, 9);
	dump(arr);

	return 1;
}
