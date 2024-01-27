#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	long int n,i,r,c,rev=0;
	system("cls");
	cout<<"\nEnter the number to be print in words:";
	cin>>n;
	cout<<"\nEntered number in words are:\n\n";
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	while(rev>0)
	{
		switch(rev%10)
		{
			case 0:
				cout<<"\tZero";
				break;
			case 1:
				cout<<"\tOne";
				break;
			case 2:
				cout<<"\tTwo";
				break;
			case 3:
				cout<<"\tThree";
				break;
			case 4:
				cout<<"\tFour";
				break;
			case 5:
				cout<<"\tFive";
				break;
			case 6:
				cout<<"\tSix";
				break;
			case 7:
				cout<<"\tSeven";
				break;
			case 8:
				cout<<"\tEight";
				break;
			case 9:
				cout<<"\tNine";
				break;
		}
		rev=rev/10;
	}
 	getch();
	return 0;
}

