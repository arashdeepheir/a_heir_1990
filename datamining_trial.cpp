#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>

/*manually creating first set of datasets for a trial version of data mining. To predict better it needs more and more datasets 
of different subsets which the customer can give himself voluntarily rather than data collecting to make prediction more refined*/

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
	
	cout<<"\nEnter your income range\n";
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

int genre(int x)
{
//int ch;
cout<<"\n Enter Genre of Movie\n";
cout<<"\nEnter your choice"<<"\nEnter 1 for comedy/Enter 2 for romance/Enter 3 for romcom/Enter 4 for thriller";
cin>>x;
/*for(i=0;i<6;i++)
{

cin>>x[i];

}

for(i=0;i<6;i++)
{*/
if (x==1)
	{
		return 0.25;
	}
if (x==2)
	{
		return 0.25;
	}
if (x==3)
	{
		return 0.25;
	}	
if(x==4)
	{
		return 0.25;
	}
	


return x;


}


char datamining(char x)

{
//if x ranges from x to 1 probabilty y (repaeat for other genre of movies)
//create a large dataset of 400 to 500 entries then try with data mining which genre of movie a person might buy using naive bayes probabilty

return x;	
}

int file(int age,char s,int inc, int gen)
 {
 	float a,c;
 	char b;
 	int g;
 	int i;
 	age=agegroup(a);
	s=sex(b);
	inc=income(c);
	gen=genre(g);
/*	for(i=0;i<10;i++)
	{
	
	g[i]=genre(d);
    }*/	 
	
	//log.open("filename.txt", fstream::app); 
	fstream my_file;	
	my_file.open("filename.txt", fstream::app);                     
	fstream MyFile("filename.txt");
	my_file<<"\n";
	my_file <<age<<"\t";			
	my_file<<s<<"\t";
	my_file<<inc<<"\t";
	my_file<<gen<<"\t";
	my_file.close();
		if (!my_file)
		 {
			cout << "File not created!";
		}
		else
		{
			cout << "File updated successfully!\n";
		}

	return 0;
	
}

int main()
{
	int ch;
	float a,c,e,g,i,k,m,o,q,s;
	char b,f,j,n,r;
	int d,h,l,p,t;

	



do{
cout<<"\nEnter your choice"<<"\nEnter 1 to enter data/Enter 2 to exit";
cin>>ch;

	switch(ch)
	{
	
	case 1:
 {
 	cout<<"\nenter 5 datasets\n";
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
