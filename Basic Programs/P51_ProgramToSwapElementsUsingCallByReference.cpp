/*
  Author: YUGAM
*/

#include<iostream>
using namespace std;

void cyclicSwap(int *a, int *b, int *c);

int main()
{
	int a, b, c;
	cout << "Enter value of a, b & c : ";
	cin >> a >> b >> c;
	
	cout << endl << "Values before swapping : " << endl;
	cout << "a, b & c are : " << a << ", " << b << ", " << c << endl;
	
	cyclicSwap(&a, &b, &c);
	
	cout << endl << "Value after swapping numbers in cycle : " << endl;
	cout << "a, b & c are : " << a << ", " << b << ", " << c << endl;
	
	return 0;
}

void cyclicSwap(int *a, int *b, int *c)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}

