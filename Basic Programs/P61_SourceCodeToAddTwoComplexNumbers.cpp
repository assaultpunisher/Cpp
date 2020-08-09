/*
  Author: YUGAM
*/

#include<iostream>
using namespace std;

typedef struct complex
{
	float real;
	float imag;
}complexNumber;

complexNumber addComplexNumbers(complex, complex);

int main()
{
	complexNumber n1, n2, tempNumber;
	char signOfImag;
	
	cout << "For 1st complex number" << endl;
	cout << "Enter real & imaginary parts : " << endl;
	cin >> n1.real >> n1.imag;
	
	cout << "For 2nd complex number" << endl;
	cout << "Enter real & imaginary parts : " << endl;
	cin >> n2.real >> n2.imag;
	
	signOfImag = (tempNumber.imag > 0) ? '+' : '-';
	tempNumber.imag = (tempNumber.imag > 0) ? tempNumber.imag : -tempNumber.imag;
	
	tempNumber = addComplexNumbers(n1, n2);
	cout << "Sum : " << tempNumber.real << tempNumber.imag << "i";
	
	return 0; 
}

complexNumber addComplexNumbers(complex n1, complex n2)
{
	complex temp;
	temp.real = n1.real + n2.real;
	temp.imag = n1.imag + n2.imag;
	return(temp);
}
