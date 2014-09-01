#include <include/Sort.h>

template <class T>
class QuickSort : public Sort<T> {
public:
	QuickSort();
	virtual void doSort(T* arr, int size, int left, int right);
	virtual ~QuickSort();
private:
	int partition(T *arr, int size, int left, int right);
};
