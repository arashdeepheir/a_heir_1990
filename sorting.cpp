#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int a[5];
	int i,j,num,ch;
	do
	{
	
	cout<<"\nDo you want to run the program?(Enter 1 to run/Enter 2 to exit)";
	cin>>ch;
	switch(ch)
	{
	
	case 1:
		{
		
	cout<<"\nEnter the numbers to be sorted::";
	
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		cout<<"\t";
		
	}
	
	cout<<"\nList before sorting is::";
	
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
		
	}
	
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
			
			num=a[i];
			a[i]=a[j];
			a[j]=num;
		}
	}
	}
	
	cout<<"\nSorted List is::\t";
	
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
		
	}
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
