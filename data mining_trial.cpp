#include<stdio.h>
#include<iostream>

using namespace std;

int agegroup(int x)

{
	
	cout<<"enter your age group(age must be 16 and above)\n";
	cin>>x;
	
	if(x>16&&x<28)
	{
		return 1;
	}
	
	if(x>28&&x<40)
	
	{
		return 2;
	}
	
	else
	
	{
		return 3;
	}
	 cout<<"\n Your age group is::"<<x
	 
	return x;
	
	

}

char sex(char x)

{
	cout<<"\nEnter your sex\n";
	cin>>x;
	
	if(x==male)
	
	{
		return 4;
		
	}
	if(x==female)
	{
		return 5;
	}
cout<<"\n Your sex is::"<<x;
	return x;

}

int income(int x)

{
	
	cout<<"\n Enter your income range\n";
	cin>>x;
	
	if(x>500)
	
	{
		return 6;
	}
	
	if(x>501&&x<5000)
	
	{
		return 7;
	}
	
	if (x>5001&&x<25000)
	{
		return 8;
	}
	
	return x;
	
}

char genre(char x)
{

cout<<"\n Enter Genre of Movie\n";
cin>>x;

if(x==romcom)
{
	return 9;
}

if(x==action)
{
	return 10;
}

if(x==documentry)
{
	return 11;
}

return x;

}

void main()
{
	
	int a,c;
	char b,d;
	
	agegroup(a);
	sex(b);
	income(c)
	genre(d);
	
	
}

