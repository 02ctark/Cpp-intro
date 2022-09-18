/*

 * Class: CMSC140_30522

 * Instructor:  Charles Naegeli

 * Project5

 * Description: Write a program that simulates a magic square using 3 one dimensional parallel arrays of integer type. 

 * Due Date: 5/12

 * I pledge that I have completed the programming assignment independently.

   I have not copied the code from a student or any source.

   I have not given my code to any student.

   Print your Name here: chris Tark





 * Pseudocode or Algorithm for the program:

	  (be sure to indent items with control structure)

	  (need to match flow chart submitted in documentation)

  1.The Lo Shu Magic Square is a grid with 3 rows and 3 columns shown below

  2.•	The grid contains the numbers 1 – 9 exactly

  3.Each one the arrays corresponds to a row of the magic square.

  4.•	Values of the grid (row by row)




 (more as needed)

*/



#include <iomanip>
#include<iostream>
using namespace std;



// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool rowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool colSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);

int main()
{

	/* Define a Lo Shu Magic Square using 3 parallel arrays corresponding to each row of the grid */
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
	
	char reoccur = 'y';
	
//loop for magic array
	do {
		fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

		showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

		if (isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS)) {

			//output 
			cout << "This is a Lo Shu magic square." << endl;

		}
		else 
			cout << "\n\n";
			cout << "Do you want to try again?";
			cin >> reoccur;

	
	}
	while (reoccur == 'Y' || reoccur == 'y');
	system("pause");


	cout << "Name: Chris Tark" << endl;
	cout << "Project #5" << endl;
	cout << "Due Date: 5/12/21" << endl;

	return 0;
}

// Function definitions go here

void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {

	int rows = 0;
	for (int column = 0; column < size; column++) {

		//asking for rows and column 3 times
		cout << "Enter the number for row " << rows;
		cout << " and the column " << column << " : ";
		cin >> arrayRow1[column];
	}
	rows++;


	for (int column2 = 0; column2 < size; column2++) {

		cout << "Enter the number for row " << rows;
		cout << " and the column " << column2 << " : ";
		cin >> arrayRow2[column2];
	}
	rows++;

	for (int column3 = 0; column3< size; column3++) {

		cout << "Enter the number for row " << rows;
		cout << " and the column " << column3 << " : ";
		cin >> arrayRow3[column3];
	}
}

void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {

	int row = 0;
	for (int num1 = 0; num1 < size; num1++) {

		
		cout << arrayRow1[num1] << " ";
	
	}
	cout << "\n";
	row++;

	for (int num1 = 0; num1 < size; num1++) {


		cout << arrayRow2[num1] << " ";

	}
	cout << "\n";
	row++;

	for (int num1 = 0; num1 < size; num1++) {


		cout << arrayRow3[num1] << " ";

	}

	row++;
	
}








bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {

	int c = 0;
	int i = 0;
	int h = 0;
	bool is = true;

	// loop

	while (c < (sizeof(arrayRow1) / sizeof(arrayRow1[0])) && i < (sizeof(arrayRow2) / sizeof(arrayRow2[0])) && h < (sizeof(arrayRow1) / sizeof(arrayRow1[0]))) {

		if ((arrayRow1[c] == arrayRow2[i]) && (arrayRow2[i] == arrayRow3[h])) {

			if (i > i) {

				is = false;
			}
			c++;
			i++;
			h++;
		}

		else if (arrayRow1[c] < arrayRow2[i])
			i++;
		else if (arrayRow2[i] < arrayRow3[h])
			i++;
		else
			h++;


	}
	return is;

}

//bool range checking code

bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int max, int min) {

	bool is = true;
	for (int num1 = 0; num1 < COLS; num1++) {

		if (arrayRow1[num1] < min || arrayRow1[num1] > max) {
			is = false;
		}
		else if (arrayRow2[num1] < min || arrayRow2[num1] > max) {
			is = false;
		}

		else if (arrayRow3[num1] < min || arrayRow3[num1] > max) {
			is = false;
		}

	}
	return is;
}

bool rowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {

	bool is = true;
	int sumRow1 = arrayRow1[0] + arrayRow1[1] + arrayRow1[2];
	int sumRow2 = arrayRow2[0] + arrayRow2[1] + arrayRow2[2];
	int sumRow3 = arrayRow3[0] + arrayRow3[1] + arrayRow3[2];

	if ((sumRow1 != sumRow2) || (sumRow1 != sumRow3) || (sumRow2 != sumRow3)) {
		is = false;
	}


	return is;
}

//sum bool

bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {
	bool is = true;
	
	int sum1 = arrayRow1[0] + arrayRow2[1] + arrayRow3[2];
	int sum2 = arrayRow1[2] + arrayRow2[1] + arrayRow3[0];

	if (sum1 != sum2) {
		is = false;
	}
	return is;
}


bool colSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {

	bool is = true;

	int sumCol1 = arrayRow1[0] + arrayRow2[0] + arrayRow3[0];
	int sumCol2 = arrayRow1[1] + arrayRow2[1] + arrayRow3[1];
	int sumCol3 = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];

	if ((sumCol1 != sumCol2) || (sumCol1 != sumCol3) || (sumCol2 != sumCol3)) {

		is = false;
	}
	return is;
}

//magic squares

bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size) {

	bool is = false;
	bool totalRange = checkRange(arrayRow1, arrayRow2, arrayRow3, size, MAX, MIN);
		bool totalUnique = checkUnique(arrayRow1, arrayRow2, arrayRow3, size);
		bool totalRow = rowSum(arrayRow1, arrayRow2, arrayRow3, size);
		bool totalCol = colSum(arrayRow1, arrayRow2, arrayRow3, size);
		bool totalSum = checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size);

		if (totalRange && totalUnique && totalRow && totalCol && totalSum) {

			is = true;
		}
		return is;
}



