/*

 * Class: CMSC140_30522

 * Instructor:  Charles Naegeli

 * Project 1

 * Description: The Department plans to purchase a humanoid robot. The Chairman would like you to write a program to show a greeting script the robot can use later.

 Your first task is to use the following script to prototype the robot for presentation

 * Due Date: 4/12/21

 * I pledge that I have completed the programming assignment independently.

   I have not copied the code from a student or any source.

   I have not given my code to any student.

   Print your Name here: Chris Tark





 * Pseudocode or Algorithm for the program:

      (be sure to indent items with control structure)

      (need to match flow chart submitted in documentation)

  1.

  2.

  3.

  4.

  5.

 (more as needed)

*/



#include <iostream>
#include <string>

using namespace std;

int main()
{


    int num1, num2, num3;
    const int month = 12;
    const int day = 360;
    const int hour = 8640;
    const int min = 518400;
    const int sec = 311040000;
    const int dog = 7;
    const int fish = 5;


    // results
    month = 0;
    day = 0;
    hour = 0;
    min = 0;
    sec = 0;
    dog = 0;
    fish = 0;



     months = 0,
        days = 0,
        hours = 0,
        mins = 0,
        secs = 0,
        dog_years = 0,
        fish_years = 0,
        adding = 0,
        subtracting = 0,
        division = 0;

    string robotName;
    string name;

    // prompt for name
    cout << "Hello, welcome to Montgomery College! My name is" << robotName; {};
    cout << endl;
    cout << "May I have your name ? ";
    cout << endl;


    getline(cin, name);
    cout << endl;


    cout << "Nice to have you with us today, " << name << "!" << endl;

    cout << "Let me impress you with a small game." << endl;

    cout << "Give me the age of an important person or a pet to you." << endl;
    cout << "Please give me only a number: " << endl;
    cin >> num1;
    cout << "\n";


    cout << "You have entered " << num1 << "." << endl;
    cout << "If this is for a person, the age can be expressed as : " << endl;
    cout << " " << num1 << " years" << endl;


    cout << " or " << months << " months" << endl;
    // CALCULATION
    months = month * num1;


    cout << " or about " << days << " days" << endl;
    // cal
    days = day * num1;


    cout << " or about " << hours << " hours" << endl;
    // cal
    hours = hour * num1;


    cout << " or about " << mins << " minutes" << endl;
    // cal 
    mins = min * num1;


    cout << " or about " << secs << " seconds." << endl;
    // cal 
    secs = sec * num1;


    cout << " If this is for a dog, it is " << dog_years << " years old in human age." << endl; // dog years 7x
    // cal for dog years
    dog_years = dog * num1;
    cout << " If this is for a gold fish, it is " << fish_years << " years old in human age." << endl; // fish years 5x
    // cal fish years
    fish_years = fish * num1;
    cout << "\n";


    cout << "Let's play another game, " << name << ". Give me a whole number. " << endl;
    cin >> num2;

    cout << "Very well. Give me another whole number. " << endl;
    cin >> num3;

    cout << "Using the operator '+' in C++, the result of " << num2 << " + " << num3 << " is " << adding << "." << endl;
    //cal for addition
    adding = num2 + num3;

    cout << "Using the operator '/', the result of " << num2 << " / " << num3 << " is " << subtracting << "." << endl;
    //cal subtraction
    subtracting = num2 - num3;

    cout << "However, the result of " << 4.0 << " / " << 5.0 << " is about " << 0.8 << "." << endl;
    cout << "\n";

    cout << " Thank you for testing my program!!" << endl;
    cout << " PROGRAMMER: Chris Tark " << endl;
    cout << " CMSC140 Common Project 1" << endl;
    cout << " Due Date : 4 / 12 / 21" << endl;

    system("pause");
}