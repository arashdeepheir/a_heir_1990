#include<stdio.h>
#include<iostream>
#include<math.h>
//#include<decimel.h>

using namespace std;

int main()
{
long double p,n,t,r,a,num,num1,num2,num3;
int ch;
do
{

cout<<"\nDo you wish to run the program?(Enter 1 to run/Enter 2 to exit)::";
cin>>ch;
switch(ch)
{
	
case 1:
	{
	
cout<<"\nEnter the principle amount::Rs";
cin>>p;

cout<<"\nEnter the rate of interst::";
cin>>r;

cout<<"\nEnter the time period for interest is to be generated::";
cin>>t;

cout<<"\nEnter the number of times interest applied::";
cin>>n;

num1=r/n;
num2=1+num1;
num=n*t;
num3=pow(num2,num);

a=p*num3;

cout<<"\nAmount before compound interest applied::Rs"<<p;
cout<<"\nAmount after compound interest applied::Rs"<<a;
cout<<"\nCompound interest ::Rs"<<a-p;
break;
}
case 2:
	{
	
exit(0);
}
}
}while(1);
return 0;
}



