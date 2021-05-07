// To find a largest number among a series of inputs terminated by 500

#include<iostream>
using namespace std;
int main()
{
	int big= -32768;
	int n;
	cout<<"Enter 500 to terminate : \n";
	for(;;)
	{
		cin>>n;
		if(n==500)break;
		if(big<n)
		    big=n;
	}
	cout<<"Largest Number = "<<big;
}
