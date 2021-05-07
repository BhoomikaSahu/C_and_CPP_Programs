#include<stdio.h>
#include<conio.h>

int main()
{
	// 1 1 2 3 4 5 8 7 16 9 32.........128
	for(int j=1,i=1;i<=128;i*=2)
	{
		printf("%d %d ",i,j);
		j=j+2;
	}
	printf("\n");
	// 1 0 2 1 4 2 8 0 16 1 32 2....
	for(int j=0,i=1;i<=128;i*=2)
	{
		printf("%d %d ",i,j%3);
		j++;
	}
	printf("\n");
	// 1 2 3 4 9 8 27 16 81 32.....
	for(int j=2,i=1;i<=500;i*=3)
	{
		printf("%d %d ",i,j);
		j*=2;
	}
	printf("\n");
	// 1 0 2 1 4 0 8 1 16.....
	for(int j=0,i=1;i<=128;i*=2)
	{
		printf("%d %d ",i,j%2);
		j++;
	}
	printf("\n");
	
	
}
