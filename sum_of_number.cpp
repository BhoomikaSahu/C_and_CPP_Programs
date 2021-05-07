// To print sum of the given number
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

int sum_of_num(int n)
{
	int sum=0,i;
		for(i=n;i>0;i/=10)
	{
		sum = sum+i%10;
	}
	return sum;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"Sum of "<<n<<" = "<<sum_of_num(n);
	return 0;
}
