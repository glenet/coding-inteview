
class Sort {
public:
	Sort();
	virtual ~Sort();
	virtual void doSort(int arr[], int size, int left, int right) = 0;
};
