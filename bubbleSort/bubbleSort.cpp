#include"bubbleSort.h"

bubbleSort::bubbleSort()
{

}
bubbleSort::bubbleSort(const bubbleSort&)
{

}
bubbleSort& bubbleSort::operator=(const bubbleSort&)
{

}
bubbleSort* bubbleSort::getInstance()
{
	static bubbleSort instance;
	return &instance;
}
void bubbleSort::sort(int *p,unsigned int sum)
{
	for(int i=0;i<sum-1;i++)
		for(int j=0;j<sum-1-i;j++)
		{
			if(p[j+1]<p[j])
			{
				int tmp = p[j];
				p[j] = p[j+1];
				p[j+1] = tmp;
			}
		}
}
