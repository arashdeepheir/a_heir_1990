#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	
	char *sname,*sclass,*ssection;
	int tuition,rcharges,ch;
	int ch1;
	sname=(char *)malloc(10);
	sclass=(char *)malloc(10);
	ssection=(char *)malloc(10);
label:	do{
	
	cout<<"\nDo you want to run the program?(enter 1 to run/enter 2 to exit):";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			{
				do{
				
			cout<<"\nAdd students(enter 1 to add students/enter 2 to print student's list/enter 3 to return to previous menu'):";
			cin>>ch1;
			switch(ch1)
			{
			case 1:	
			{
			
			cout<<"\nEnter the studentname:";
		
			cin>>sname;
	
			cout<<"\nEnter the studentclass:";
	

		
			cin>>sclass;
	

			cout<<"\nEnter the studentsection:";
	

		
			cin>>ssection;
	
    		
		cout<<"\nEnter tuition fee:";               //This is tuition fee that a student has to pay
 		cin>>tuition;
 
 		cout<<"\nEnter rcharges:";                 /*This is random charges which includes charges such as maintenance,service etc;*/ 
 		cin>>rcharges;
		break;
	}
	 case 2:
	 	
	 	{
	 		cout<<"\nPrint student's name:";
	 		cout<<sname;
	 		
	 		cout<<"\nPrint student's class:";
	 		cout<<sclass;
	 		
	 		cout<<"\nPrint student's section:";
	 		cout<<ssection;
	 		
	 		cout<<"\nPrint student's total fee:";
	 		cout<<tuition+rcharges;
	 		
	 		
		 }
		break;
		case 3:
			goto label;
			break;
			
		} 
		}while(1);
	}
		case 2:
			{
			exit(0);
			}
	}
}while(1);
return 0;	
}


