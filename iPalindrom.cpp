// TO check given number is palindrom or not
#include<stdio.h>
#include<conio.h>

int reverseNum(int);
void iPalindrom(int);

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	/*for(int i=n;i>0;i/=10)
	{
		printf("%d",i%10);
	}
	printf("\n");*/
	iPalindrom(n);
	return 0;
}

void iPalindrom(int n)
{
	int s;
	s=reverseNum(n);
	if(s==n)
	    printf("%d is a PALINDROM number\n",n);
	else
	    printf("%d is not a PALINDRON number\n",n);
}

int reverseNum(int n)
{
	int i,s=0;
	for(i=n;i>0;i/=10)
	{
		s=s*10+i%10;
	}
	return s;
}

