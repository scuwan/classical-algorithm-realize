#ifndef MERGE_SORT_H
#define MERGE_SORT_H
class mergeSort
{
public:
	void sort(int* p,int first, int last);
	static mergeSort* getInstance();
private:
	mergeSort();
	mergeSort(const mergeSort&);
	mergeSort& operator=(const mergeSort&);
	void mergeArray(int*,int,int,int);
};

#endif
