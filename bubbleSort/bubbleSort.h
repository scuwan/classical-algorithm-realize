#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_

class bubbleSort
{
public:
	void sort(int* p,unsigned int sum);	
	static bubbleSort* getInstance();
private:
	bubbleSort();
	bubbleSort(const bubbleSort&);
	bubbleSort& operator=(const bubbleSort&);
};

#endif
