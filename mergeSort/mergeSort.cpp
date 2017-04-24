#include"mergeSort.h"

mergeSort::mergeSort()
{

}
mergeSort::mergeSort(const mergeSort&)
{

}
mergeSort& mergeSort::operator=(const mergeSort&)
{

}
mergeSort* mergeSort::getInstance()
{
	static mergeSort instance;
	return &instance;
}

void mergeSort::mergeArray(int *p,int first,int mid,int last)
{
	int count = last-first+1;
	int *tmp = new int[count];
	int i=first,j=mid+1;
	int m=mid,n=last;
	int k=0;
	while(i<=m&&j<=n)
	{
		if(p[i]<=p[j])
			tmp[k++] = p[i++];
		else
			tmp[k++] = p[j++];	
	}
	while(i<=m)
		tmp[k++] = p[i++];
	while(j<=n)
		tmp[k++] = p[j++];
	for(i=0;i<k;i++)
		p[first+i]=tmp[i];
	delete[] tmp;
}
void mergeSort::sort(int *p,int first,int last)
{
	if(first<last)
	{
		int mid =(first+last)/2;
		sort(p,first,mid);
		sort(p,mid+1,last);
		mergeArray(p,first,mid,last);
	}
}
