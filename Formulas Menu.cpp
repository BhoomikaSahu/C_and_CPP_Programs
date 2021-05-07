#include<stdio.h>
#include<math.h>
#include<process.h>
#define pf printf
#define sf scanf
int main()
{
	pf("\n********************************Formula Menu***********************************");
	float a,b,c,s;
	int n;
	while(1)            
	{
		pf("\n*****************************************************************************");
	pf("\n1.Simple Interest");
	pf("\n2.Compound Interest");
	pf("\n3.Area of Triangle");
	pf("\n4 Area of Circle");
	pf("\n5.Area of Squre");
	pf("\n6.Area of Rectangle");
	pf("\n7.Volume of Cube\n8.Volume of Cuboid\n9.Exit\n\nEnter your choice: ");
	
	
	sf("%d",&n);
	
	switch(n)
	{
	//***************************SIMPLE INTEREST********************************************
	    case 1:
	    	pf("\nEnter Value of Principle=");
	        sf("%f",&a);
	        pf("\nEnter Value of Rate=");
	        sf("%f",&b);
	        pf("\nEnter value of Time=");
	        sf("%f",&c);
	        s=(a*b*c)/100;
	        pf("\nSimple Interset=%.2f\n",s);
	        continue;
    //***************************COMPOUND INTEREST******************************************
	    case 2:
	        pf("\nEnter Value of Principle=");
	        sf("%f",&a);
	        pf("\nEnter Value of Rate=");
	        sf("%f",&b);
	        pf("\nEnter value of Time=");
	        sf("%f",&c);
	        s=pow(a*(1+b)/100,c);
	        pf("\nCompound Interset=%.2f\n",s);
	        continue;
	//**************************AREA OF TRIANGLE*******************************************
	    case 3:
	    	pf("\nEnter Value of Base of triangle=");
	        sf("%f",&a);
	        pf("\nEnter Value of height of triangle=");
	        sf("%f",&b);
	        s=(1/2.0)*a*b;
	        pf("\nArea of Triangle=%.2f\n",s);
	        continue;
	//**************************AREA OF CIRCLE*******************************************        
	    case 4:
	    	pf("\nEnter Value of radius of Circle=");
	        sf("%f",&a);
	        s=3.14*pow(a,2);
	        pf("\nArea of Circle=%.2f\n",s);
	        continue;  
	//**************************AREA OF SQUARE*******************************************	
	    case 5:
	    	pf("\nEnter Value of a Side of Square=");
	        sf("%f",&a);
	        s=pow(a,2);
	        pf("\nArea of Square=%.2f\n",s);
	        continue; 
	//**************************AREA OF RECTANGLE*******************************************
	    case 6:
	    	pf("\nEnter Value of Length of Rectangle=");
	        sf("%f",&a);
	        pf("\nEnter Value of Width of Rectangle=");
	        sf("%f",&b);
	        s=a*b;
	        pf("\nArea of Rectangle=%.2f\n",s);
	        continue;
    //**************************VOLUME OF CUBE*******************************************	
	    case 7:
	    	pf("\nEnter Value of a Side of Cube=");
	        sf("%f",&a);
	        s=pow(a,3);
	        pf("\nVolume of Cube=%.2f\n",s);
	        continue;  	
	//**************************VOLUME OF RECTANGLE*******************************************	
	    case 8:
	    	pf("\nEnter Value of a Length of Cuboid=");
	        sf("%f",&a);
	        pf("\nEnter Value of a Width of Cuboid=");
	        sf("%f",&b);
	        pf("\nEnter Value of a Height of Cuboid=");
	        sf("%f",&c);
	        s=a*b*c;
	        pf("\nVolume of Cuboid=%.2f\n",s);
	        continue;
	//**************************EXIE FROM MENU*******************************************	
		case 9:
			exit(0);
			
	//**************************INVALID INPUT*******************************************		
	    default:
	    	pf("\nInvalid Input\n");
	    	continue;
	    	
	    	
    } 
		
	return 0;			  
    }
}


