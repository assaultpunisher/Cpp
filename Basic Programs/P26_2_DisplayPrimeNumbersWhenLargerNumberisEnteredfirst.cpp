/*
  Author: YUGAM
*/

#include<iostream>
using namespace std;

int main()
{
	int low, high, flag, temp;
	
	cout << "Enter two numbers : ";
	cin >> low >> high;
	
	if (low > high)
	{
		temp = low;
		low = high;
		high = temp;
	}
	cout << "Prime numbers between " << low << " and " << high << endl;
	
	while (low < high)
	{
		flag = 0;
		
		for(int i = 2; i <= low/2; ++i)
		{
			if(low % i == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			cout << low << " ";
			
		++low;
	}
	return 0;
}
