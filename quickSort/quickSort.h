#ifndef QUICK_SORT_H
#define QUICK_SORT_H
class quickSort
{
public:
	void sort(int *array,int begin,int end);
	static quickSort* getInstance();
private:
	quickSort();
	quickSort(const quickSort&);
	quickSort& operator=(const quickSort&);	
};

#endif

