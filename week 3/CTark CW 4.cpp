/*
 Class: CMSC140_30522

 Instructor: Charles Naegeli

 Class work 4 part 1

 Description of CW 4:
1. A software company sells a package that retails for $99. Quantity discounts are given according to the following table.

Quantity                       discount
10-19                              20%
20-49                              30%
50-99                              40%
100 or more                  50%

Write a program that asks for the number of units sold and computes the total cost of the purchase.
Input validation: Make sure the number of units is greater than 0.


*/







#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() 


{// define variable
	const double unitcost = 99.00;
	int unitsSold;
	double totalCost;

	cout << "How many units were sold ? ";
    cin >> unitsSold;

	// input validation for negative number input

	if (unitsSold < 0)
		cout << "Units sold must be grester than zero. " << endl;
	else
	{
		// calculations
		if (unitsSold <= 10)
		
			totalCost = unitsSold * unitcost;

		// apply discount rate from the table
		else if (unitsSold >= 10 && unitsSold <= 19)
			totalCost = (1.0 - 0.2) * (unitsSold * unitcost);
		else if (unitsSold >= 20 && unitsSold <= 49)
			totalCost = (1 - .3) * (unitsSold * unitcost);
		else if (unitsSold >= 50 && unitsSold <= 99)
			totalCost = (1 - .4) * (unitsSold * unitcost);
		else
			totalCost = (1 - 0.5) * (unitsSold * unitcost);
		cout << setprecision(2) << fixed;
		cout << "The total cost of the purchase is $ " << totalCost << endl;



	}

	system("pause");
	return 0; 








}


/*
 Class: CMSC140_30522

 Instructor: Charles Naegeli

 Class work 4 part 2
 Description:
*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	// define my varaibles
	const double BASE_PRICE1 = 100.0;
	const double BASE_PRICE2 = 130.;
	const double BASE_PRICE3 = 150.;
	const double BASE_PRICE4 = 160.;
	const double BASE_PRICE5 = 165.;

	const double SURCHARGE = 0.10;

	int numberOfS;
	char isFancyBack;
	char isAppointment;
	double price;


	cout << "Enter the number of subjects in the portrait : " << ;
	cin >> numberOfS;

	if (numberOfS < 1)
	cout << "please enter a number greater than 0" << endl;

	else
	{


		switch (numberOfS)
		{
		case 1: price =  BASE_PRICE1;
			break;
		case 2: price =  BASE_PRICE2;
			break;
		case 3: price =  BASE_PRICE3;
			break;
		case 4 price =  BASE_PRICE4;
			break;
		default: price =  BASE_PRICE5;

	}

		// calculate the price after surcharge as required

		cout << "Do you want a fancy background(y / n) ?";
			cin >> isFancyBack;

			cout << "Do you want an appointment date(y / n)?";
			cin >> isAppointment;

			if (isFancyBack == 'y' && isAppointment == 'y');
			price = price * 2 * SURCHARGE;

			// add case for surcharge
			else
			{
				if (isFancyBack == 'y' || isAppointment == 'y')
					price = price * SURCHARGE;
			}
			cout << "The price is : $" << price;


		Enter the number of subjects in the portrait : 6
		Do you want a fancy background(y / n) ? y
		Do you want an appointment date(y / n) ? n
		The price is : $181.5
	}

	system("pause");
	return 0;













}