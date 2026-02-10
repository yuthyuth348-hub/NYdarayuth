#include<iostream>
using namespace std;
int main() {
	double  khr;
	
	cout << "=======CONVERT KHMER RIEL TO US DOLLAR=======" << endl;
	cout << "The exchangeRate is 4100(Khmer riel)" << endl;
	cout << "Please input your money in khmer:";
	cin >>khr;
	
	cout <<khr<< "khr in usd=" <<khr/4100<<"usd";
	
	return 0;
  } 
