#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int n;
	printf("Enter value of n : ");
	scanf("%d",&n);
	printf("Factorial of %d = %d",n,factorial(n));
}
int factorial(int n)
{
	int s=1;
	for(int i=n;i>=1;i--)
	    s=s*i;
	return s;    
}
