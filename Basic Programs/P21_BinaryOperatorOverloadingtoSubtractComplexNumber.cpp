/*
  Author: YUGAM
*/

#include<iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float imag;
	public:
		Complex(): real(0), imag(0){ }
		void input()
		{
			cout << "Enter real & imaginary parts : ";
			cin >> real >> imag;
		}
		
		Complex operator - (Complex c2)
		{
			Complex temp;
			temp.real = real - c2.real;
			temp.imag = imag - c2.imag;
			
			return temp; 
		}
		
		void output()
		{
			if(imag < 0)
				cout << "Output Complex Nmber : " << real << imag << "i";
			else
				cout << "Output Complex Number : " << real << "+" << imag << "i";		
		}
};

int main()
{
	Complex c1, c2, result;
	
	cout << "Enter first complex number : \n";
	c1.input();
	
	cout << "Enter second complex number : \n";
	c2.input();
	
	result = c1 - c2;
	result.output();
	
	return 0;
}
