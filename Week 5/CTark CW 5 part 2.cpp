#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


int main() {

	//varibles
	string name, streetAddress, city, state, phoneNumber;
	int zipCode;

	//file
	ofstream outfile;  // NEW
	outfile.open("List.txt");


	//user input
	cout << "Enter your name: ";
	getline(cin, name);
	outfile << name << endl;

	cout << "Enter your phone number: ";
	getline(cin, phoneNumber);
	outfile << phoneNumber << endl;

	cout << "Enter your street adress: ";
	getline(cin, streetAddress);
	outfile << streetAddress << endl;

	cout << "Enter your city: ";
	getline(cin, city);
	outfile << city << endl;

	cout << "Enter your state: ";
	getline(cin, state);
	outfile << state << endl;

	cout << "Enter your zip code: ";
	cin >> zipCode;
	outfile << zipCode << endl;
	





	//close outfile

	outfile.close();


	//reading file
	ifstream inFile;  // NEW DATA TYPE
	inFile.open("List.txt");

	//check for error for file doesnt exist

	if (inFile.fail())  //NEW
	{
		cerr << "Error opening file " << endl;

	}

	else {

		//reading information
		getline(inFile, name);
		getline(inFile, streetAddress);
		getline(inFile, city);
		getline(inFile, state);
		getline(inFile, phoneNumber);
		inFile >> zipCode;


		//display information
		cout << "This is your information\n\n"
			<< "Name: " << name << "\n"
			<< "Phone Number: " << phoneNumber << "\n"
			<< "Address: " << streetAddress << "\n"
			<< "City: " << city << "\n" 
			<< "State: " << state << "\n";


	}







	inFile.close();
	system("pause");
	return 0;


}