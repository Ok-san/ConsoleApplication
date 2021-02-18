#include "libraries.h"

void menu()
{
	system("cls");
	char number;
	cout << "Select the number seminar:" << endl;
	cout << "- Seminar 3. Working with a one-dimensional array. Enter 3." << endl;
	cout << "- Seminar 4. Working with the matrix. Enter 4." << endl;
	cout << "- Seminar 5. Work with files. Enter 5." << endl;
	cout << "To complete the program. Enter 0." << endl;
	while (true)
	{
		cin >> number;
		switch (number)
		{
		case '3':seminar_3(); break;
		case '4':seminar_4(); break;
		case '5':seminar_5(); break;
		case '0': exit(0); break;
		default:
			cout << "Error! You entered the wrong number." << endl;
			break;
		}
	}
}