#include<stdio.h>
#include<iostream>
#include<stdlib.h>
//#include<cctype.h>


using namespace std;
 

 
int main()
{
	int a[8],num;
	int ch,i;

	
	do{
	
	cout<<"\nDo you want to run the program?(press 1 to enter/press 2 to exit)";
	cin>>ch;
	
	switch(ch)
	{
		
	case 1:
		{
		
		
	cout<<"\nEnter numbers::";
	for(i=0;i<8;i++)
	{
	
     	cin>>a[i];
     	
}
    	
    
    	
	
	cout<<"\nEntered list of numbers::";
	
	for(i=0;i<8;i++)
	{
	
		cout<<a[i]<<"\t";
    } 

cout<<"\nEnter the number you want to search:: ";


cin>>num;

for(i=0;i<8;i++)
{
	if(a[i]==num)
	{
		break;
	}
}
	if(i==8)
	
{

	cout<<"\nNumber is not in the list";
	
}
else
{
	cout<<"\nNumber is at position number:"<<i+1;
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

