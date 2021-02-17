#include <iostream>
#include <String>
#include <iomanip>
using namespace std;

int main() {

	int choice; 
	bool whileRunner = true;

	cout << "Welcome to student creation program. " << endl;

	while(whileRunner) {

		cout << "Please choose from the following options: " << endl;
		cout << "[0] Add student from input" << endl;
		cout << "[1] Edit Student from input" << endl;
		cout << "[2] Display a requested student from input" << endl;
		cout << "[3] Display partial info of all students" << endl;
		cout << "[4] Display all info of students" << endl;
		cout << "[5] Read in student info from a file" << endl;
		cout << "[6] Write student info to a file" << endl;
		cout << "[7] Exit program " << endl;

		cin >> choice;

		switch (choice)

		{

		case 0:
			cout << "Sampe Text";
			break;

		case 1:
			cout << "Sampe Text";
			break;

		case 2:
			cout << "Sampe Text";
			break;

		case 3:
			cout << "Sampe Text";
			break;

		case 4:
			cout << "Sampe Text";

			break;


		case 5:
			cout << "Sampe Text";
			break;


		case 6:
			cout << "Sampe Text";
			break;

		case 7:
			exit(1);
			break;

		default:
			cout << "Sampe Text default edition";

		}

	}


	return 0;









}