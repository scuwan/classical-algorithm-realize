#include<iostream>

#define abs(x) (x>0?x:-x)
unsigned int spiral_queue(int x,int y)
{
	unsigned abs_x = abs(x);
	unsigned abs_y = abs(y);
	unsigned range_x_y = abs_x>abs_y?abs_x:abs_y;
	std::cout<<"range_x_y :"<<range_x_y<<std::endl;
	if(0==range_x_y)return 1;
	
	unsigned int value_max = (2*range_x_y+1)*(2*range_x_y+1);
	std::cout<<"value_max :"<<value_max<<std::endl;
	
	unsigned int value_gap =0;
	if(y==range_x_y)
		value_gap = range_x_y - x;
	else if(x==-range_x_y)
		value_gap = 2*range_x_y+range_x_y - x;
	else if(y==-range_x_y)
		value_gap = 4*range_x_y+range_x_y + x;
	else	// if(x==range_x_y)
		value_gap = 6*range_x_y+range_x_y + y;
	return value_max - value_gap;

		
}

int main()
{
	int x,y;
	while(1)
	{
		std::cin>>x>>y;
		std::cout<<spiral_queue(x,y)<<std::endl;	
	}	
}	
