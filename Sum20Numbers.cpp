#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
main()
{ 
	int a,b,c,d;
	b=0;
	a=0;
	cout<<a;
	while(a<=20)
	{
		c=b+a;
 		b=c;
 		cout<<"+"<<a; 
 		a++;
	}       
	cout<<"\n la suma es "<<c<<endl; 
	getch();
}

