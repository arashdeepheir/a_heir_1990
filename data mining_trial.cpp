#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>

using namespace std;

float agegroup(float x)

{
	
	cout<<"enter your age group(age must be 18 and above)\n";
	cin>>x;
	
/*	if(x>18&&x<25)
	{
		return 0.33;
	}
	
	if(x>25&&x<40)
	
	{
		return 0.33;
	}
	
	else
	
	{
		return 0.33;
	}
*/	 
	 
	return x;
	
	

}

char sex(char x)

{
	
	char m,f;
	cout<<"\nEnter your sex\n";
	cin>>x;
	
	if(x==m)
	
	{
	return 0.5;
		
	}
	if(x==f)
	{
	return 0.5;
	}

	return x;

}

float income(float x)

{
	
	cout<<"\n Enter your income range\n";
	cin>>x;
	
/*	if(x>10000&&x<20000)
	
	{
		return 0.33;
	}
	
	if(x>20000&&x<40000)
	
	{
			return 0.33;
	}
	
	if (x>40000)
	{
		return 0.33;
	}*/
	
	return x;
	
}

char genre(char x)
{

cout<<"\n Enter Genre of Movie\n";
cin>>x;


return x;

}


char datamining(char x)

{
//if x ranges from x to 1 probabilty y (repaeat for other genre of movies)
//create a large dataset of 40 to 50 entries then try with data mining which genre of movie a person might buy using naive bayes

return x;	
}

int file(int age,char s,int inc, char g)
 {
 	int a,c;
 	char b,d;
 	age=agegroup(a);
	s=sex(b);
	inc=income(c);
	g=genre(d);
fstream my_file;
		
		
	my_file.open("filename.txt", ios::out);
	
		my_file<<"\n";
		my_file <<age<<"\t";
		my_file<<s<<"\t";
		my_file<<inc<<"\t";
		my_file<<g;
		my_file.close();
		if (!my_file) {
		cout << "File not created!";
	}
	else {
		cout << "File updated successfully!\n";
	}

	fstream MyFile("filename.txt");
	return 0;
}

int main()
{
	int ch;
	float a,c;
	char b,d;
	float age,inc;
	char s,g;                 //take array???

cout<<"enter 5 datasets";

do{
cout<<"\nEnter your choice"<<"\nEnter 1 to enter data/Enter 2 to exit";
cin>>ch;

	switch(ch)
	{
	
	case 1:
 {
file(a,b,c,d);
	
}

 break;

	case 2:
		{
		
	exit(0);
}
}
}while(1);

return 0;
}


	
	


