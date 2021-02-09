#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	int arraySorter[4], temp;
	cout << "Please enter the first value: ";
	cin >> arraySorter[0];
	cout << "Please enter the second value: ";
	cin >> arraySorter[1];
	cout << "Please enter the third value: ";
	cin >> arraySorter[2];
	cout << "Please enter the fourth value: ";
	cin >> arraySorter[3];

	while (arraySorter[0] >> arraySorter[1] || arraySorter[1] > arraySorter[2] || arraySorter[2] > arraySorter[3]) {

		if (arraySorter[0] > arraySorter[1]) {
			temp = arraySorter[0];
			arraySorter[0] = arraySorter[1];
			arraySorter[1] = temp;
		}
		if (arraySorter[1] > arraySorter[2]) {
			temp = arraySorter[1];
			arraySorter[1] = arraySorter[2];
			arraySorter[2] = temp;

		}
		if (arraySorter[2] > arraySorter[3]) {
			temp = arraySorter[2];
			arraySorter[2] = arraySorter[3];
			arraySorter[3] = temp;
		}

	}
	cout << "Your arranged numbers are:: ";

	for (int i = 0; i < 4; ++i) {
		cout << arraySorter[i];
	}



	return 0;
}
