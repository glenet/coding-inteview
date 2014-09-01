#include <include/QuickSort.h>
#include <string.h>
#include <iostream>
using namespace std;

static int *s2i(char *str)
{
	int size = strlen(str);
	int *iArray = new int[size];

	for (int i = 0; i < size; i++)
		iArray[i] = (int)str[i];

	return iArray;
}

static bool is_Anagrams(char *a, char *b, int size_a, int size_b)
{
	bool result = true;
	if (size_a != size_b)
		return false;

	Sort *sort = new QuickSort;

	int *i_a = s2i(a);
	int *i_b = s2i(b);

	sort->doSort(i_a, 7, 0, 6);
	sort->doSort(i_b, 7, 0, 6);

	for (int i = 0; i < size_a; i++) {
		if (i_a[i] != i_b[i]) {
			result = false;
		}
	}
	delete sort;
	delete [] i_a;
	delete [] i_b;

	return result;
}
int main(int argc, char** argv)
{
	char a[] = "abcdefg";
	char b[] = "vfedcba";

	if (is_Anagrams(a, b, strlen(a), strlen(b)))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
