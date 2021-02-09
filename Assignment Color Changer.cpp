//Assignment Color Changer. Input a color and change the text color accordingly. Change backgrounds if necessary.//


#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	for (int press = 0; press < 10 + press; ++press) {
		string colorinput;
		int colornum;
		system("Color 0F");
		cout << "Enter your color: ";
		cin >> colorinput;
		
		if (colorinput == "black") {
			colornum = 0;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			cout << "\nPress the Enter key to continue!";
		
		}
		else if (colorinput == "blue") {
			colornum = 1;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "green") {
			colornum = 2;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "cyan") {
			colornum = 3;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "red") {
			colornum = 4;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "magenta") {
			colornum = 5;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "brown") {
			colornum = 6;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "lightgray") {
			colornum = 7;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "darkgray") {
			colornum = 8;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "lightblue") {
			colornum = 9;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "lightgreen") {
			colornum = 10;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "lightcyan") {
			colornum = 11;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "lightred") {
			colornum = 12;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "yellow") {
			colornum = 14;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else if (colorinput == "white") {
			colornum = 15;
			cout << "\n The color you have inputted is ";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << colorinput;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}
		else {
			colornum = 15;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colornum);
			cout << "I don't recognize your color. Try these! \n=====================\n";
			cout << "blue \nred \nyellow \nblack \nwhite \ngreen \ncyan \nmagenta \nlightred \nlightgreen \nlightblue \ngray \nlightgray \nlightcyan \nbrown \ndarkgray \n=====================\n";
			cout << "Check them out!";
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "\nPress the Enter key to continue!";
		}


		
		if (colorinput == "black") {
			system("Color F0");
		}
		_getch();
		system("CLS");

	}
	
	return 0;
}