#include"insertionSort.h"

insertionSort::insertionSort()
{

}
insertionSort::insertionSort(const insertionSort& s)
{

}
insertionSort& insertionSort::operator=(const insertionSort& s)
{

}
insertionSort* insertionSort::getInstance()
{
	static insertionSort instance;
	return &instance;
}

void insertionSort::sort(int* p,int sum)
{
	for(int i=1;i<sum;i++)
		for(int j=0;j<i;j++)
		{
			if(p[j]<p[i])
			{
				int tmp = p[i];
				for(int k=i;k>j+1;k--)
				{
					p[k] = p[k-1];		
				}	
				p[j] = tmp;
				break;
			}
		}
}
