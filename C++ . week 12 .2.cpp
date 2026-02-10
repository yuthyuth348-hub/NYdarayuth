#include<iostream>

using namespace std;

int add(int a, int b)
{
	return a+b;
}

int subtract(int a,int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	return a/b;
}

int main()
{
	cout<< add(3,3)<<endl;
	cout<< subtract(20,10)<<endl;
	cout<< multiply(20,10)<<endl;
	cout<< divide(20,10);
	
}	            
