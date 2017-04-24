#ifndef HEAP_SORT_H
#define HEAP_SORT_H

class heapSort
{
public:
	void sort(int*p, int size);
	static heapSort* getInstance();
private:
	heapSort();
	heapSort(const heapSort&);
	heapSort& operator=(const heapSort&);
	void heapAdjust(int *,int,int);
	void buildHeap(int*,int);
};

#endif 
