/*For each integer n in the interval [a,b] (given as input) :

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
Input Format

The first line contains an integer, a.
The seond line contains an integer, b.*/

#include<iostream>
using namespace std;

int main() 
{
    int a, b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        switch (i) 
        {
            case 1:
            cout<<"one\n";break;
            case 2:
            cout<<"two\n";break;
            case 3:
            cout<<"three\n";break;
            case 4:
            cout<<"four\n";break;
            case 5:
            cout<<"five\n";break;
            case 6:
            cout<<"six\n";break;
            case 7:
            cout<<"seven\n";break;
            case 8:
            cout<<"eight\n";break;
            case 9:
            cout<<"nine\n";break;
        }
        if(i>9)
        {
            if(i%2==0)
            cout<<"even\n";
            else 
            cout<<"odd\n";
        }
    }

    return 0;
}


