




#include <numbers>
#include <iostream>
using namespace std;

//Implement a function named largerThanN that accepts three arguments : an array of type int, 
//the size of the array of type intand an int number n.

void largerThanN(int[], int, int); // prototype







//The function should display all of the numbers in the array that are greater than the number n.

//in the main() function create an array named numbers containing 10 integers : 30, 20, 50, 2, -1, 44, 3, 12, 90, 32

//Ask the user to enter a number.

int main() {

	const int SIZE = 10;
	int n;
	int numbers[SIZE] = { 30, 20, 50, 2, -1, 44, 3, 12, 90, 32 };

	cout << "Enter a number: " << endl;
	cin >> n;



	largerThanN(numbers, SIZE, n);


	system("pause");
	return 0;
}


void largerThanN(int array[], int size, int n) {

	cout << "The numbers that are larger than " << n << " are: ";

	for (int x = 0; x < size; x++) {

		if (array[x] > n) {

			cout << array[x] << " ";

		}


	}


	cout << "\n";
}