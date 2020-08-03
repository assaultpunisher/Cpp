/*
  Author: YUGAM
*/

#include<iostream>
using namespace std;

int main()
{
	int num1, num2, i, num, digit, sum;
	
	cout << "Enter two numbers : ";
	cin >> num1 >> num2;
	
	cout << "Armstrong numbers between " << num1 << " and " <<" are : " << endl;
	for(i = num1; i <= num2; i++)
	{
		sum = 0;
		num = i;
		
		for(; num>0; num /= 10)
		{
			digit = num % 10;
			sum = sum + digit * digit * digit;
		}
		
		if(sum == i)
		{
			cout << i << endl;
		}
	}
	
	return 0;
}
