/*
  Author: YUGAM
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float base, exponent, result;
	
	cout << "Enter Base and Exponent respectively : ";
	cin >> base >> exponent;
	
	result = pow(base, exponent);
	
	cout << base << "^" << exponent << " = " << result;
	
	return 0;
}
