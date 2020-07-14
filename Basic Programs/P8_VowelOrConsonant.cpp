/*
  Author: YUGAM
*/

#include<iostream>
using namespace std;

int main()
{
	char c;
	int isLowVow, isUppVow;
	
	cout << "Enter an Alphabet : ";
	cin >> c;
	
	isLowVow = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	
	isUppVow = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	
	if (isLowVow || isUppVow)
		cout << c << " is a Vowel";
	else
		cout << c << " is a Consonant";
		
	return 0;
}
