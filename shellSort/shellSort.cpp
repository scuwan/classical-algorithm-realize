#include"shellSort.h"

shellSort::shellSort()
{

}
shellSort::shellSort(const shellSort& s)
{

}
shellSort& shellSort::operator=(const shellSort& s)
{

}
shellSort* shellSort::getInstance()
{
	static shellSort instance;
	return &instance;
}

void shellSort::sort(int *p,int sum,int factor)
{
	int d=factor>sum/2?factor:sum/2;
	while(d>0)
	{
		for(int i=d;i<sum;i++)
		{
			int j=i-d;
			while(j>=0&&p[j]>p[j+d])
			{
				int tmp = p[j];
				p[j] = p[j+d];
				p[j+d] = tmp;
				j=j-d;
			}
		}
		d= d/2;
	}
}
