#include"quickSort.h"

quickSort::quickSort()
{
	
}

quickSort::quickSort(const quickSort& q)
{

}
quickSort& quickSort::operator=(const quickSort& q)
{

}
quickSort* quickSort::getInstance()
{
	static quickSort instance;
	return &instance; 
}

void quickSort::sort(int* p,int begin,int end)
{
	if(p==0)
		return;
	int min = p[begin];
	int i = begin;
	int j = end;
	bool up_down = false;
	while(i<j)
	{
		if(false==up_down)
		{
			if(p[j]<min)
			{
				p[i] = p[j];
				p[j] = min;
				++i;
				up_down = true;
			}
			else
			{
				--j;
			}
		}
		else
		{
			if(p[i]>min)
			{
				p[j] = p[i];
				p[i] = min;
				--j;
				up_down = false;
			}
			else
			{
				++i;
			}
		}
	}
	if(begin == end)
		return;
	if(i==begin)
		sort(p,j+1,end);
	else if(j==end)
		sort(p,begin,i-1);
	else
	{
		sort(p,begin,i-1);
		sort(p,j,end);
	}
}

