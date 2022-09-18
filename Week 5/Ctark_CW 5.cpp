
#include <iostream>
using namespace std;


int main() {
	cout << "(i)" << endl;
	for (int i = 0; i < 10; i++) {
		cout << "*";
	}
	cout << "\n \n";

	cout << "(ii)" << endl;
	for (int i = 0; i < 20; i++) {
		cout << "*";
	}
	cout << "\n \n";

	cout << "(iii)" << endl;
	for (int i = 0; i < 10; i++) {
		for (int o = 0; o <= i; o++)
			cout << "*";
		cout << endl;
	}

	cout << "\n \n";

	cout << "(iv)" << endl;
	for (int i = 0; i < 20; i++) {
		for (int o = 0; o <= i; o++)
			cout << "*";
		cout << endl;
	}

	cout << "\n \n";

	cout << "(v)" << endl;
	for (int i = 10; i > 0; i--) {
		for (int o = 0; o < i; o++)
			cout << "*";
		cout << endl;

	}

	cout << "\n \n";

	cout << "(vi)" << endl;
	for (int i = 20; i > 0; i--) {
		for (int p = 0; p < i; p++)
			cout << "*";
		cout << endl;
	}


	system("pause");
	return 0;
}



#include <iostream>

#include <string>

#include <iomanip>

using namespace std;

int main() {

	string location;

	int i, floors, rooms[30], singleRoom[10], doubleRoom[10], kingRoom[10], suiteRoom[10];

	int singleRoomRate = 60, doubleRoomRate = 75, kingRoomRate = 100, suiteRoomRate = 150;

	int unoccupied, min;

	double totalRooms = 0, occupiedRooms = 0, income = 0.0, occupancyRate;

	int sum = 0;

	cout << fixed << setprecision(2);

	cout << "====================================================\n";

	cout << right << setw(30) << "BlueMount Hotel\n";

	cout << "====================================================\n";

	cout << "Enter the Location of this hotel chain: ";

	cin >> location;

	cout << "Enter total number of floors of the hotel: ";

	cin >> floors;

	while (floors <= 0  floors > 5) {

		cout << "number of floors should be between 1 and 5 !! please try again.\n";

		cout << "\nEnter total number of floors of the hotel: ";

		cin >> floors;

	}

	for (i = 1; i <= floors; i++) {

		cout << "\n\nEnter total number of rooms in the " << i << "th floor: ";

		cin >> rooms[i];

		while (rooms[i] <= 0  rooms[i] > 30) {

			cout << "number of rooms should be between 1 and 30 !! please try again.\n\n";

			cout << "Enter total number of rooms in the " << i << "th floor : ";

			cin >> rooms[i];

		}

		cout << "How many SINGLE rooms are occupied in the " << i << "th floor : ";

		cin >> singleRoom[i];

		cout << "How many DOUBLE rooms are occupied in the " << i << "th floor : ";

		cin >> doubleRoom[i];

		cout << "How many KING rooms are occupied in the " << i << "th floor : ";

		cin >> kingRoom[i];

		cout << "How many SUITE rooms are occupied in the " << i << "th floor : ";
		sum = singleRoom[i] + doubleRoom[i] + kingRoom[i] + suiteRoom[i];

	}

}

cout << "\n\n================================================================================\n";

cout << right << setw(40) << "BlueMont Hotel located in " << location << endl << endl;

cout << right << setw(47) << "TODAY'S ROOM RATES<US$/night>" << endl << endl;

cout << right << setw(20) << "Single Room" << setw(20) << "Double Room" << setw(20) <<

"King Room" << setw(20) << "Suite Room";

cout << endl << endl;

cout << right << setw(20) << singleRoomRate << setw(20) << doubleRoomRate << setw(20) <<

kingRoomRate << setw(20) << suiteRoomRate;

cout << "\n===================================================================================\n";
for (i = 1; i <= floors; i++) {

	income = income + (singleRoom[i] * singleRoomRate) +

		(doubleRoom[i] * doubleRoomRate) + (kingRoom[i] * kingRoomRate) + (suiteRoom[i] * suiteRoomRate);

	totalRooms = totalRooms + rooms[i];

	occupiedRooms = occupiedRooms + singleRoom[i] + doubleRoom[i] + kingRoom[i] + suiteRoom[i];

}

unoccupied = totalRooms - occupiedRooms;

occupancyRate = (occupiedRooms / totalRooms) * 100;

cout << "\n" << right << setw(35) << "Hotel Income: " << right << setw(10) << "$" << income;

cout << "\n" << right << setw(35) << "Total # of rooms: " << right << setw(10) << totalRooms;

cout << "\n" << right << setw(35) << "Total # Occupied Rooms: " << right << setw(10) << occupiedRooms;

cout << "\n" << right << setw(35) << "Total # Unoccupied Rooms: " << right << setw(10) << unoccupied;

cout << "\n" << right << setw(35) << "Occupancy rate: " << right << setw(10) << occupancyRate << "%";

int r = 1;

min = rooms[1];

for (i = 2; i <= floors; i++) {

	if (rooms[i] < min) {

		min = i;

		r = i;

	}

}

cout << "\n\n" << r << "th Floor with " << rooms[r] << " rooms, has the least # of rooms.";

if (occupancyRate < 60) {

	cout << "\nNeed to improve Hotel occupancy rate!!\n\n";

}

cout << "\n\nThank you for testing my program!!";

cout << "\nPROGRAMEER : YOUR NAME";

cout << "\nCMSC140 Common Project 3";

cout << "\nDue Date: PROJECT DUE DATE\n\n";

return 0;

}