#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

class insertionSort
{
public:
	void sort(int* p,int sum);
	static insertionSort* getInstance();
private:
	insertionSort();
	insertionSort(const insertionSort&);
	insertionSort& operator=(const insertionSort&);
};

#endif
