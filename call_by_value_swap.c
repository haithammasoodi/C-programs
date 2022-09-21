/* Program in C to swap using call by value */
#include<stdio.h>
void swap (int,int);
int main()
{
	int x,y;
	x=3;
	y=5;
	printf("A %d %d \n",x,y);
	swap(x,y);
	printf("B %d %d\n",x,y);
	return 0;
}
void swap (int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("C %d %d\n",x,y);
}