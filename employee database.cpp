#include<stdio.h>
#include<iostream>

using namespace std;

	struct emp{
		
		char name[10];
		int code;
		char department[6];
	};


void enter(struct emp s1)
{

int i,j;

cout<<"Enter name of employee\t";
for(i=0;i<10;i++)
{

	cin>>s1.name[i];
}


cout<<"\nEnter employee code\t";
cin>>s1.code;


cout<<"\nEnter name of department\t";
for(j=0;j<6;j++)
{

cin>>s1.department[j]; 	
}
cout<<"\nName of employee\t";

for(i=0;i<10;i++)
{

cout<<s1.name[i]; 	
}

cout<<"\nEmployee code\t"<<s1.code;


cout<<"\nName of department\t";
for(j=0;j<6;j++)

{

cout<<s1.department[j]; 	
}
}


int main()

{
	emp e1;
	
	enter(e1);
	
	return 0;
	
	
	
	
}




