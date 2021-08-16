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

char genre(char x[10])
{
int i;
cout<<"\n Enter Genre of Movie\n";

for(i=0;i<10;i++)
{

cin>>x[i];

}
for(i=0;i<10;i++)
	{
return x[i];

}
}


char datamining(char x)

{
//if x ranges from x to 1 probabilty y (repaeat for other genre of movies)
//create a large dataset of 40 to 50 entries then try with data mining which genre of movie a person might buy using naive bayes

return x;	
}

int file(int age,char s,int inc, char g[10])
 {
 	int a,c;
 	char b;
 	char d[10];
 	int i;
 	age=agegroup(a);
	s=sex(b);
	inc=income(c);
	for(i=0;i<10;i++)
	{
	
	g[i]=genre(d);
    }	  
fstream my_file;
		
		
		
	my_file.open("filename.txt", ios::out);
		fstream MyFile("filename.txt");
		my_file<<"\n";
		my_file <<age<<"\t";			
		my_file<<s<<"\t";
		my_file<<inc<<"\t";
		for(i=0;i<10;i++)
	{
		my_file<<g[i];
	}
		my_file.close();
				if (!my_file) {
		cout << "File not created!";
	}
	else {
		cout << "File updated successfully!\n";
	}

	

	return 0;
	

}

int main()
{
	int ch;
	float a,c,e,g,i,k,m,o,q,s;
	char b,d,f,h,j,l,n,p,r,t;
	



do{
cout<<"\nEnter your choice"<<"\nEnter 1 to enter data/Enter 2 to exit";
cin>>ch;

	switch(ch)
	{
	
	case 1:
 {
 	cout<<"enter 5 datasets";
file(a,b,c,d);
file(e,f,g,h);
file(i,j,k,l);
file(m,n,o,p);
file(q,r,s,t);
	
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


	
	


