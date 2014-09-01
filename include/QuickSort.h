#include <include/Sort.h>

class QuickSort{
public:
	QuickSort();
	~QuickSort();

	void doSort(int* arr, int size, int left, int right);
private:
	int partition(int *arr, int size, int left, int right);
};
