/*Program to demonstrate the use of an if-else-if ladder by writing a C++ program that asks the user to 
enter a character. The program should then classify and display whether the character is:
A lowercase letter (a..z)
An uppercase letter (A..Z)
A digit (0..9)
A special character (anything else) */
#include<iostream>
using namespace std;
int main()
{
	//declare the variable that stores the character
	char inputchar = 0;
	//Prompt the user to enter a character
	cout << "Enter a character: ";
	cin >> inputchar;
	/*Check if the character is a lowercase letter,
	an uppercase letter, a digit or a special
	character using if-else-if ladder */
	if (inputchar >= 'a' && inputchar <= 'z') //check for a lowercase letter
		cout << "The character is a lowercase letter (a...z)." << endl;
	else if (inputchar >= 'A' && inputchar <= 'Z')//check for an uppercase letter
		cout << "The character is an uppercase letter (A...Z)." << endl;
	else if (inputchar >= '0' && inputchar <= '9')//check for a digit
		cout << "The character is a digit (0...9)." << endl;
	else //anything other than these three cases is a special character
		cout << "The character is a special character." << endl;
	return 0;
}