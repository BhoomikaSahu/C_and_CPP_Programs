// To print given number is magic number or not
// 153 = 1^3 +5^3 +3^3 =153

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

void magic_num(int n)
{
	int s=0,i;
	for(i=n;i>0;i/=10)
	{
		s=s+((i%10)*(i%10)*(i%10));
	}
	if(n==s)
	{
	    cout<<n<<" IS A MAGIC NUMBER\n";
	}
	else
	{
		cout<<n<<" IS NOT A MAGIC NUMBER\n";
	}
}
void magic_nums()
{
	long int s=0,i,j;
	for(j=1;j<=999999999;j++)
	{
		for(i=j;i>0;i/=10)
	    {
		    s=s+((i%10)*(i%10)*(i%10));
	    }
	    if(j==s)
	    {
	        cout<<j<<" IS A MAGIC NUMBER\n";
		}
	}
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	magic_num(n);
	magic_nums();
	return 0;
}
