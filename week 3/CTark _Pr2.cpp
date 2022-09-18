/*

 * Class: CMSC140_30522

 * Instructor:  Charles Naegeli

 * Project<2>

 * Description: Write a program that shows the following menu options and lets the user to convert from Metric to Imperial system:

Converter Toolkit
--------------------
    1. Temperature Converter
    2. Distance Converter
    3. Weight Converter
    4. Quit

•	If the user enters 1, the program should ask for the temperature in Celsius and convert it to  Fahrenheit

•	If the user enters 2, the program should ask for the distance in Kilometer and convert it to Mile

•	If the user enters 3, the program should ask for the weight in Kilogram and convert it to  Pound

•	If the user enters 4, the program should end.


 * Due Date: 4/19

 * I pledge that I have completed the programming assignment independently.

   I have not copied the code from a student or any source.

   I have not given my code to any student.

   Print your Name here: Chris Tark





 * Pseudocode or Algorithm for the program:

      (be sure to indent items with control structure)

      (need to match flow chart submitted in documentation)

1.	The program should use at least one selection control structure (if – else statement)
2.	Be sure to convert as specified. For example, convert temperature from Celsius to Fahrenheit, not the other way around.
3.	Use the following for converting input:
        •	1 kilometer = 0.6 mile,
        •	1 kilogram = 2.2 pounds,
        •	The formula for converting Celsius degree to Fahrenheit is:
        F = (9/5)*C + 32 where F is the temperature in Fahrenheit and C is the temperature in Celsius
4.	Convert temperature to a whole number such as 78, distance to two positions after decimal point (for example 84.56) and weight to one position after decimal point (For example 121.6).


 (more as needed)

*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    //variables 

    int pick;
    string country;
    double fahrenheit{}, celsius{}, mile, kiloMeter, pound, kiloGram;



    //interface
    cout << "Enter a country name: ";
    getline(cin, country);
    cout << endl;
    
    cout << "Converter Toolkit" << endl;
    cout << "--------------------" << endl;
    cout << " 1. Temperature Converter" << endl;
    cout << " 2. Distance Converter" << endl;
    cout << " 3. Weight Converter" << endl;
    cout << " 4. Quit" << endl << '\n';

        

     cout << "Enter your choice (1-4): ";
     cin >> pick;
     cout << endl;
    
//invalid input
        if (pick < 0 || pick > 4)
        {
            cout << "Input is invalid, enter a number 1-4" << endl;

        }

//temperature   
        if (pick == 1)
        {
            
            cout << "Please enter temperature in Celsius (such as 24): ";
            cin >> celsius;
//calculation for conversion to F
            fahrenheit = celsius * 9 / 5 + 32;
            cout << "It is " << fahrenheit << " in fahrenheit." << endl;
            
            cout << country << " sounds fun!" << endl << '\n';

            
        }
        if (pick == 2)
        {
            cout << "Please enter distance Kilometer (such as 18.54): ";
            cin >> kiloMeter;

            if (kiloMeter < 0)
            {
//error
                cout << " !!! Program does not convert negative distance !!! " << endl;
                cout << country << " sounds fun!" << endl << '\n';
            }

                else
                {
//conversion kilometer to mile
                mile = kiloMeter * .6;
                cout << "It is " << mile << " in miles" << endl;
                cout << country << "sounds fun!" << endl << '\n';
                }
        }
        if (pick == 3)
         {
            cout << "Please enter weight in Kilogram: ";
            cin >> kiloGram;

            if (kiloGram < 0)
            {
//error
                cout << " !!! Program does not convert negative weight !!! " << endl;
                cout << country << " sounds fun!" << endl << '\n';
            }
            else
            {
                //conversion kilogram to pound
                pound = kiloGram * 2.2;
                cout << "It is " << pound << " in pounds." << endl;
                cout << country << " sounds fun!" << endl << '\n';
            }
         }
        if (pick == 4)
        {
            return 0;
        }

        cout << "Thank you for testing my program!!" << endl;
        cout << "PROGRAMMER: Christopher Tark" << endl;
        cout << "CMSC140 Common Project 2" << endl;
        cout << "Due date: 4/9/21" << endl;

    system("pause");
    return 0;
}