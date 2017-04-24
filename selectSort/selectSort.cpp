#include"selectSort.h"

selectSort::selectSort()
{

}
selectSort::selectSort(const selectSort& s)
{

}
selectSort& selectSort::operator=(const selectSort& s)
{

}
selectSort* selectSort::getInstance()
{
	static selectSort instance;
	return &instance;
}
void selectSort::sort(int *p,int sum)
{
	for(int i=0;i<sum-1;i++)
	{
		int index_min = i;
		for(int j=i+1;j<sum;j++)
		{
			if(p[j]<p[index_min])
				index_min = j;
		}
		if(index_min!=i)
		{
			int tmp = p[i];
			p[i] = p[index_min];
			p[index_min] = tmp;
		}
	}
}
