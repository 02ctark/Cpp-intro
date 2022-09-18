/*

 * Class: CMSC140_30522

 * Instructor:  Charles Naegeli

 * Project 4

 * Description: Write a program that calculates the average number of days a company's employees are absent during the year and outputs a report on a file named "employeeAbsences.txt".

 * Due Date: 5/12/21

 * I pledge that I have completed the programming assignment independently.

   I have not copied the code from a student or any source.

   I have not given my code to any student.

   Print your Name here: Chris Tark





 * Pseudocode or Algorithm for the program:


  1.the user must enter the number of employees in the company

  2.the user must enter as integers for each employee

  3. Do not accept a number less than 1 for the number of employees

  4. Do not accept a negative number for the days any employee missed

  5. Be sure to print appropriate error messages for these items if the input is invalid.



*/
using namespace std;

#include <iostream>
#include <iomanip>

#include <fstream>



int main() {
	//varibles
	int numOfEmployee();
	int num_days(int, std::ofstream&);
	double avg_abs(int, int);

	//id and code
	int numOfEmp = 0;
	int numInfo = 0;
	double avgAbsent = 0.0;

	//s ofstream
	ofstream myfile;


	numOfEmp = numOfEmployee();
	myfile.open("employeeAbsences.txt");
	numInfo = num_days(numOfEmp, myfile);
	cout << endl;

	//the total at the end and average
	cout << "The " << numInfo << " employees were absent for a total number of " << numInfo << " days " << endl;

	myfile << endl << "The " << numInfo << " employees were absent for a total number of " << numInfo << " days " << endl;
	avgAbsent = avg_abs(numInfo, numInfo);

	cout << "The average number of days absent is: " << avgAbsent << " days " << endl;
	myfile << "The average number of days absent is: " << avgAbsent << " days " << endl;
	cout << "Programmer: Chris Tark";
	return 0;
}

//# of employees
int numOfEmployee() {


	int num;

	cout << "Calculate the average number of days a company's employee are absent " << endl;
	//asking for employees
	cout << "\nPlease enter the number of employees in the company : ";
	cin >> num;


	//loop for employees being negative
	while (num < 1)
	{
		cout << "INVALID, number of employees in a company must be > 1.";
		cout << "Please enter the number of employees in the company : ";
		cin >> num;
	}
	return num;
}


int num_days(int e, std::ofstream& myfile) {


	int numEmploy = e;
	int num;
	int total_days = 0;
	int id;

	//report
	if (myfile) {

		myfile << "EMPLOYEE ABSENCE REPORT " << endl;
		myfile << "employee id" << "days absent" << endl;

	}

	//loop for ID's
	for (int i = 0; i < numEmploy; i++) {
		cout << "Please enter an employee ID : ";
		cin >> id;
		cout << "Please enter the number of days this employee was absent : ";
		cin >> num;

		//loop for negative
		while (num < 0) {
			cout << "The number of days missed must not be negative." << endl;
			cout << "Please re-enter the number of days this employee was absent : ";
			cin >> num;
		}

		if (myfile) {
			myfile << id << num << endl;
		}

		total_days += num;
	}

	return total_days;
}

//calulations for average absents 
double avg_abs(int i, int q) {
	int numSecond = i;
	int numSecondD = q;
	double avgNumberOfAbsents;
	

	avgNumberOfAbsents = numSecondD / numSecond;
	return avgNumberOfAbsents;
	
}