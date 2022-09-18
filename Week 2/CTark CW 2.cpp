
 #include <iostream>
 #include <string>

using namespace std;

int main(
)
{
	// variables
	int classParticipation, testScore, assignmentScore, examScore, practiceScore, finalScore;
	double averageScore;
	string name;

	//input block
	cout << "Enter the Student's name:";
	getline(cin, name);
	cout << endl;

	cout << "Enter Class Participation Score ranging from 0 to 100 : ";
	cin >> classParticipation;
	cout << endl;

	cout << "Enter Test Score ranging from 0 to 100 : ";
	cin >> testScore;
	cout << endl;

	cout << "Enter Assignment Score ranging from 0 to 100 : ";
	cin >> assignmentScore;
	cout << endl;

	cout << "Enter Exam Score ranging from 0 to 100 : ";
	cin >> examScore;
	cout << endl;

	cout << "Enter Practice Score ranging from 0 to 100 : ";
	cin >> practiceScore;
	cout << endl;

	// calculations
	finalScore = classParticipation + testScore + assignmentScore + examScore + practiceScore;
	averageScore = (finalScore) / 5.;
	cout << endl;

	// output

	cout << name << " Final Score : " << finalScore << endl;
	cout << " Average Score : " << averageScore << endl;
	
	system("pause");
	return 0;
}
