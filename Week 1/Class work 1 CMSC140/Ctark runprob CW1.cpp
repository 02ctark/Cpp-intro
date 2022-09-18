// This program will take a number and divide it by 2.

// Place your name here

#include <iostream>
using namespace std;

int main()
{
	float number;
	double divider;

	divider = 0.01;

	cout << "Hi there" << endl;
	cout << "Please input a number and then hit return" << endl;
	cin >> number;

	number = number / divider;

	cout << "Half of your number is " << number << endl;
	system("pause");
	return 0;
}