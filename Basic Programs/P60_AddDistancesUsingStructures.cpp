/*
  Author: YUGAM
*/

#include<iostream>
using namespace std;

struct Distance{
	int feet;
	float inch;
}d1, d2, sum;

int main()
{
	cout << "Enter 1st distance " << endl;
	cout << "Enter feet : ";
	cin >> d1.feet;
	cout << "Enter inch : ";
	cin >> d1.inch;
	
	cout << "\nEnter 2nd distance " << endl;
	cout << "Enter feet : ";
	cin >> d2.feet;
	cout << "Enter inch : ";
	cin >> d2.inch;
	
	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;
	
	if(sum.inch > 12)
	{
		++sum.feet;
		sum.inch -= 12;
	}
	
	cout << endl << "Sum of distances : " << sum.feet << " feet " << sum.inch << " inches";
	
	return 0;
}
