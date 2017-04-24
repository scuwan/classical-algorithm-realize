#ifndef SHELL_SORT_H
#define SHELL_SORT_H

class shellSort
{
public:
	void sort(int *p,int sum,int factor);
	static shellSort* getInstance();
private:
	shellSort();
	shellSort(const shellSort&);
	shellSort& operator=(const shellSort&);
};
#endif
