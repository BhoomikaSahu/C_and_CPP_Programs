// To count digits of any number
#include<iostream>
using namespace std;
int countDigits(int n){
	int i,c=0;
	for(i=n;i>0;i/=10){
	    c++;
    }
    if(n==0)c=1;
	return c;
}
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"Digits = "<<countDigits(n);
	
}
