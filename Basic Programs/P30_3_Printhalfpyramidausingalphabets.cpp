/*
  Author: YUGAM
*/

#include<iostream>
using namespace std;

int main()
{
	char input, alphabet = 'A';
	
	cout << "Enter the uppercase character you want to print in the last row : ";
	cin >> input;
	
	for(int i; i <= (input-'A'+1); ++i)
	{
		for(int j = 1; j <= i; ++j)
		{
			cout << alphabet << " ";
		}
		++alphabet;
		
		cout << endl;
	}
	
	return 0;
}
