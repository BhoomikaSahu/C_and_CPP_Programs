#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,i;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=1;i<=9;i++)
	{
		if(i==a)
		{
			switch(a)
			{
				case 1:
					printf("one\n");
					break;
				case 2:
					printf("two\n");
					break;	
			    case 3:
					printf("three\n");
					break;
				case 4:
					printf("four\n");
					break;
				case 5:
					printf("five\n");
					break;
				case 6:
					printf("six\n");
					break;
				case 7:
					printf("seven\n");
					break;
				case 8:
					printf("eight\n");
					break;
				case 9:
					printf("nine\n");
					break;
			}
		
		}
		if(i==b)
		{
			switch(b)
			{
				case 1:
					printf("one\n");
					break;
				case 2:
					printf("two\n");
					break;	
			    case 3:
					printf("three\n");
					break;
				case 4:
					printf("four\n");
					break;
				case 5:
					printf("five\n");
					break;
				case 6:
					printf("six\n");
					break;
				case 7:
					printf("seven\n");
					break;
				case 8:
					printf("eight\n");
					break;
				case 9:
					printf("nine");
					break;
		    }
	    }
	    if(a>9)
	    {
	    	printf("nine");
		}
		if(b>9)
		{
			printf("nine")
		}
	}
}
