#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
double d,det;
int main()
{
	double a,b,c;
	double alpha,beta;
	double num1,num2,num3;
	cout<<"Enter variables of linear equation ax^2+bx+c=0 \n";
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<"Linear equation is "<<a<<"x^2+"<<b<<"x+"<<c<<"=0\n";
	det=4*a*c;
	cout<<"Determinent of a linear equation ::"<<det<<"\n";
	d=sqrt(det);
	num1=-b+d;
	num2=2*a;
	num3=-b-d;
	alpha=num1/num2;
	beta=num3/num2;
	cout<<"Roots of a linear equation \n"<<"alpha::"<<alpha<<"\tbeta::"<<beta;
	return 0;

}
