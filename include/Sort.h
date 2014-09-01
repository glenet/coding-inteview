
template <class T>
class Sort {
public:
	Sort() {}
	virtual ~Sort() {}
	virtual void doSort(T* arr, int size, int left, int right) = 0;
};
