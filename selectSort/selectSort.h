#ifndef SELECT_SORT_H
#define SELECT_SORT_H

class selectSort
{
public:
	void sort(int *p,int sum);
	static selectSort* getInstance();
private:
	selectSort();
	selectSort(const selectSort&);
	selectSort& operator=(const selectSort&);
};


#endif
