#include<stdio.h>
#include<conio.h>

int power(int a,int n)
{
	int i=1;
	int s=1;
	while(i<=n)
	{
		s=s*a;
		i++;
	}
	return s;
}
int main()
{
	int a,n;
	printf("Enter value of a and n : \n");
	scanf("%d%d",&a,&n);
	printf("Value of %d^%d = %d",a,n,power(a,n));
	return 0;
}
