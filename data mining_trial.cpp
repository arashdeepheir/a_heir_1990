#include<stdio.h>
#include<iostream>
#include<fstream>

using namespace std;

float agegroup(float x)

{
	
	cout<<"enter your age group(age must be 18 and above)\n";
	cin>>x;
	
	if(x>18&&x<25)
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
	
	if(x>10000&&x<20000)
	
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
	}
	
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

int file()
 {
	
}

int main()
{
	
	float a,c;
	char b,d;
	float age,inc;
	char s,g;                 //take array???
    
	age=agegroup(a);
	s=sex(b);
	inc=income(c);
	g=genre(d);
	fstream my_file;
	my_file.open("filename.txt", ios::out);
	if (!my_file) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		my_file <<age<<"\t";
		my_file<<s<<"\t";
		my_file<<inc<<"\t";
		my_file<<g;
		my_file.close();
	}
	return 0;
	ofstream MyFile("filename.txt");
//	write(file);
	
	
}

