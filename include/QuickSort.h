#include <include/Sort.h>

class QuickSort : public Sort{
public:
	QuickSort();
	~QuickSort();
	virtual void doSort(int arr[], int size, int left, int right);

private:
	int partition(int *arr, int size, int left, int right);
};
