/*
  Author: YUGAM
*/

#include<iostream>
using namespace std;

int main()
{
	int a, b, temp;
	
	cout << "Enter First Number : ";
	cin >> a;
	
	cout << "Enter Second Number : ";
	cin >> b;
	
	cout << "\nBefore Swapping" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	temp = a;
	a = b;
	b = temp;
	
	cout << "\nAfter Swapping" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	return 0;
}
