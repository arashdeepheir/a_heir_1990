#include<stdio.h>
#include<iostream>
#include<fstream>

using namespace std;

	struct emp{
		
		char name[10];
		int code;
		char dept[10];
	};


void enter(struct emp s1)
{

int i;

cout<<"Enter name of employee\t";
for(i=0;i<10;i++)
{

	cin>>s1.name[i];
}


cout<<"\nEnter employee code\t";
cin>>s1.code;


cout<<"\nEnter name of department\t";
for(int j=0;j<6;j++)
{

cin>>s1.dept[j]; 	
}
cout<<"\nName of employee\t";

for(i=0;i<10;i++)
{

cout<<s1.name[i]; 	
}

cout<<"\nEmployee code\t\t"<<s1.code;


cout<<"\nName of department\t";
for(int j=0;j<6;j++)

{

cout<<s1.dept[j]; 	
}


}

/*int file(struct emp s1)

{
	int i;
	fstream my_file;	
	my_file.open("filename.txt", fstream::app);                     
	fstream MyFile("filename.txt");
	my_file<<"\n";
	for(i=0;i<10;i++)
	{
	my_file <<s1.name[i]<<"\t";	
	}
	my_file<<s1.code<<"\t";
	for(i=0;i<10;i++)
	{
	my_file<<s1.dept[i]<<"\t";
	}
	my_file.close();
		if (!my_file)
		 {
			cout << "File not created!";
		}
		else
		{
			cout << "\nFile updated successfully!\n";
		}
}*/

int main()

{
	emp e1;
	int ch;
	
	do{
	
	cout<<"\nEnter your choice"<<"\nPress 1 to enter and display employee details/Press 2 to exit";
	cin>>ch;
	switch(ch)
	{
		
	case 1:enter(e1);
//	file(e1);
	break;
	
	case 2:exit(0);
	
	
}
	
	
	
	
}while(1);
return 0;	
}