#include<stdio.h>
#include<conio.h>
#define size 10
int main()
{
	int arr[size];
	int n,m ,i,j,t;
	printf("Enter number of coins : \n");
	scanf("%d",&n);
	printf("Enter values of coins : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Tatal money : \n");
	scanf("%d",&m);
	for(i=0;i<=2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			
			if(arr[i]+arr[j]==m)
			t++;
		}
	}
	printf("%d",t);
	return 0;
}
