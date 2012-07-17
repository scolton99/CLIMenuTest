// Name (Place)
// Revision x.x.x
// Dayofweek, Month Day, Year
// Programmed by
// Comments:  ;revision x.x.x, date, new features/changed features
// Bugs Present:  

#include "stdafx.h"																		// Includes commonly used functions
#include <iostream>																		// Includes the cin and cout functions
#include <string>																		// Includes support for string type variables

using namespace std;																	// Changes to Standard namespace (std)

int main(array<System::String ^> ^args)													// Declares the main function as an integer return type, and adds optional arguments
{																						// Begin Code
	int option;																			// Declares the variable option as type integer

    cout << "---Main Menu------------------------" << endl;								// Menu Titlebar
	cout << "| 1.                               |" << endl;								// Option 1
	cout << "| 2.                               |" << endl;								// Option 2
	cout << "| 3.                               |" << endl;								// Option 3
	cout << "| 4.  Exit                         |" << endl;								// Option 4
	cout << "------------------------------------" << endl << endl;						// Bottom

	choice:																				// Sets location as choice

	cout << "Input choice: " << endl;													// Prints "Input choice: " to the console, then ends the line
	cin >> option;																		// Requests user input for the string variable option, then waits for the user to press return

	switch(option){																		// Makes a switch statement with the condition of option
	case 1:																				// If option = 1, do this code
		break;																			// Leave the current switch statement
	case 2:																				// If option = 2, do this code
		break;																			// Leave the current switch statement
	case 3:																				// If option = 3, do this code
		break;																			// Leave the current switch statement
	case 4:																				// If option = 4, do this code
		cout << "Goodbye. Press a key to exit." << endl;								// Print "Goodbye.  Press a key to exit." to the console, then ends the line
		system("pause>nul");															// Pauses the screen until a key is pressed, and hides the standard "Press any key to continue..." message
	default:																			// If option != 1 or 2 or 3 or 4
		string yn;																		// Declares the variable yn as a string type
		tryagain:																		// Sets location as tryagain
		cout << "Invalid option.  Try again? (Y/N)" << endl;							// Prints "Invalid option.  Try again? (Y/N)" to the console, then ends the line
		cin >> yn;																		// Request user input to the string variable yn, then waits for the user to press return
		if (yn == "Y" || yn == "y" || yn == "n" || yn == "N"){							// If yn == "y" or "Y" or "n" or "N", do this code
		}else{																			// Else
			cout << endl << "Invalid option." << endl;									// Ends the line, then prints "Invalid option." to the console, then ends the line
			goto tryagain;																// Go to the location tryagain
		}																				// EndElse
		goto choice;																	// Goto location choice
	}																					// End Switch Statement
    return 0;																			// Return control to the operating system
}																						// End code
