#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	int cartesianX1, cartesianY1, cartesianX2, cartesianY2, slope;
	cout << "Please enter the first X value: ";
	cin >> cartesianX1;
	cout << "Please enter the first Y value: ";
	cin >> cartesianY1;
	cout << "Please enter the second X value: ";
	cin >> cartesianX2;
	cout << "Please enter the second Y value: ";
	cin >> cartesianY2;

	if (cartesianX1 != cartesianX2) {
		slope = (cartesianY2 - cartesianY1) / (cartesianX2 - cartesianX1);

		if (slope > 0) {
			cout << "Output: Positive Slope";
		}
		else if (slope < 0) {
			cout << "Output: Negative Slope";
		}
		else if (slope == 0) {
			cout << "Output: Horizontal Line";
		}
	}
	else {
		cout << "Output: Vertical Line";
	}

	return 0;
}
