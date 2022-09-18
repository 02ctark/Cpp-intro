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


	cout << "Enter the number of subjects in the portrait : ";
	cin >> numberOfS;

	if (numberOfS < 1)
		cout << "please enter a number greater than 0" << endl;

	else
	{


		switch (numberOfS)
		{
		case 1: price = BASE_PRICE1;
			break;
		case 2: price = BASE_PRICE2;
			break;
		case 3: price = BASE_PRICE3;
			break;
		case 4: price = BASE_PRICE4;
			break;
		default: price = BASE_PRICE5;

		}

		// calculate the price after surcharge as required

		cout << "Do you want a fancy background(y / n) ?";
		cin >> isFancyBack;

		cout << "Do you want an appointment date(y / n)?";
		cin >> isAppointment;
		cout << endl;

		if (isFancyBack == 'y' && isAppointment == 'y');
		price = price + price * 2 * SURCHARGE;

		// add case for surcharge
		
		else {

			if (isFancyBack == 'y' || isAppointment == 'y')
				price = price + price * SURCHARGE;


			cout << "The price is : $" << price << endl;

		}

			
	}

	system("pause");
	return 0;













}