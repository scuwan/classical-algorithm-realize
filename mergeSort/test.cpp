#include"mergeSort.h"
#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;

int main()
{
	int array[100];
	srand((unsigned int)time(0));
	for(int i=0;i<100;i++)
	{
		array[i] = rand()%1000+1;
	}
	mergeSort::getInstance()->sort(array,0,99);
	for(int i=0;i<100;i++)
	{
		cout<<array[i]<<endl;
	}
	return 0;
}
