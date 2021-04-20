#include<stdio.h>
#include<iostream>

using namespace std;

int agegroup(int x)

{
	
	cout<<"enter your age group(age must be 16 and above)\n";
	cin>>x;
	
	if(x>18&&x<25)
	{
	//	return (calculate individual naives bayes probabaily);
	}
	
	if(x>25&&x<40)
	
	{
	//	return (calculate individual naives bayes probabaily);
	}
	
	else
	
	{
	//	return (calculate individual naives bayes probabaily);
	}
	 
	 
	return x;
	
	

}

char sex(char x)

{
	cout<<"\nEnter your sex\n";
	cin>>x;
	
	if(x==male)
	
	{
	//	return (calculate individual naives bayes probabaily);
		
	}
	if(x==female)
	{
	//	return (calculate individual naives bayes probabaily);
	}

	return x;

}

int income(int x)

{
	
	cout<<"\n Enter your income range\n";
	cin>>x;
	
	if(x>10000&&x<20000)
	
	{
	//	return (calculate individual naives bayes probabaily);
	}
	
	if(x>20000&&x<40000)
	
	{
		//	return (calculate individual naives bayes probabaily);
	}
	
	if (x>40000)
	{
		//	return (calculate individual naives bayes probabaily);
	}
	
	return x;
	
}

char genre(char x)
{

cout<<"\n Enter Genre of Movie\n";
cin>>x;

//if x ranges from x to 1 probabilty y (repaeat for other genre of movies)
//create a large dataset of 40 to 50 entries then try with data mining which genre of movie a person might buy using naive bayes
return x;

}

void main()
{
	
	int a,c;
	char b,d;
	
	agegroup(a);
	sex(b);
	income(c)
	
	
	
}

