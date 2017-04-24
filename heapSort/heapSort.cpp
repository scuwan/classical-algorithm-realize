#include"heapSort.h"

heapSort::heapSort()
{

}
heapSort::heapSort(const heapSort& s)
{

}
heapSort& heapSort::operator=(const heapSort& s)
{

}
heapSort* heapSort::getInstance()
{
	static heapSort instance;
	return &instance;
}

void heapSort::heapAdjust(int *p,int i,int size)
{
	int lchild = 2*i+1;
	int rchild = 2*i+2;
	int max = i;
	if(i<=size/2)
	{
		if(lchild<size&&p[lchild]>p[max])
		{
			max = lchild;
		}
		if(rchild<size&&p[rchild]>p[max])
		{
			max = rchild;
		}
		if(max!=i)
		{
			int tmp = p[i];
			p[i] = p[max];
			p[max] = tmp;
			heapAdjust(p,max,size);
		}
	}
}

void heapSort::buildHeap(int *p,int size)
{
	int i;
	for(i=size/2;i>=0;i--)
	{
		heapAdjust(p,i,size);
	}
}

void heapSort::sort(int *p,int size)
{
	int i;
	buildHeap(p,size);
	for(i=size-1;i>0;i--)
	{
		int tmp = p[0];
		p[0] = p[i];
		p[i] = tmp;
		heapAdjust(p,0,i);
	}
}
