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

   */




#include <iostream>
#include <iomanip>

using namespace std;



int main()
{

    // all the number being entered by the the player
    int num1{};
    int num2{};
    int num3{};

    //constant for names
    string robotName = " Chris";
    string name;
    const string due = "Due Date : 4 / 12 / 21";
    const string programmer = "PROGRAMMER: Chris Tark";
    const string assignmentNumber = "CMSC140 Common Project 1";
  

        // prompt for name

    cout << "Hello, welcome to Montgomery College! My name is" << robotName;
    cout << endl;
    cout << "May I have your name ? ";
    cout << endl;
    cin >> name;



    cout << "Nice to have you with us today, " << name << "!" << endl;

    cout << "Let me impress you with a small game." << endl;

    cout << "Give me the age of an important person or a pet to you." << endl;
    cout << "Please give me only a number: " << endl;
    cin >> num1;
    cout << "\n";


    cout << "You have entered " << num1 << "." << endl;
    cout << "If this is for a person, the age can be expressed as : " << endl;
    cout << " " << num1 << " years" << endl;

    //constant for calculations
    double month = num1 * 12;
    double day = month * 30;
    double hour = day * 24;
    double min = hour * 60;
    double sec = min * 60;

    // constant for animals
    int dog = num1 * 7;
    int fish = num1 * 5;

    cout << " or " << month << " months" << endl;


    cout << " or about " << day << " days" << endl;


    cout << " or about " << hour << " hours" << endl;


    cout << " or about " << min << " minutes" << endl;


    cout << " or about " << sec << " seconds." << endl;



    cout << " If this is for a dog, it is " << dog << " years old in human age." << endl; // dog years 7x
 
    cout << " If this is for a gold fish, it is " << fish << " years old in human age." << endl; // fish years 5x
    cout << "\n";





    cout << "Let's play another game, " << name << ". Give me a whole number. " << endl;
    cin >> num2;

    cout << "Very well. Give me another whole number. " << endl;
    cin >> num3;

    //calculation for arithmetics
    double adding = num2 + num3;
    double division = num2 / num3;
    float division2 = float(num1) / num2;

    cout << "Using the operator '+' in C++, the result of " << num2 << " + " << num3 << " is " << adding << "." << endl;
    

    cout << "Using the operator '/', the result of " << num2 << " / " << num3 << " is " << division << "." << endl;
  

    cout << "However, the result of " << num2 << " / " << num3 << " is about " << division2 << "." << endl << "\n";
    
   
    
    cout << "Thank you for testing my program!!" << endl;
    cout << programmer << endl;
    cout << assignmentNumber << endl;
    cout << due << endl;

    system("pause");
}