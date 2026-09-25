#include <iostream>
using namespace std;
int main()
{
	// Declare variables for the number and its remainder
	int num = 0, rem = 0;

	// Prompt the user to enter a number
	cout << "Input: ";
	cin >> num;

	// Check that the number is positive
	if (num > 0)
	{
		rem = num % 2; //Find remainder when divided by 2

		if (rem == 0) //If remainder is 0, the number is even.
		{
			cout << "Output: \"The number is even.\"" << endl;
			//Check divisibility by 4
			if ((num % 4) == 0)
				cout << "Output: \"The number is divisible by 4.\"" << endl;
			//Check divisibility by 6
			if ((num % 6) == 0)
				cout << "Output: \"The number is divisible by 6.\"" << endl;
		}
		//Otherwise, the number is odd
		else
		{
			cout << "Output: \"The number is odd.\"" << endl;
			//Check divisibility by 3
			if ((num % 3) == 0)
				cout << "Output: \"The number is divisible by 3.\"" << endl;
			//Check divisibility by 5
			if ((num % 5) == 0)
				cout << "Output: \"The number is divisible by 5.\"" << endl;
		}
	}
	//Number is zero or negative.
	else
		cout << "\nYou have not entered a positive number." << endl;
	return 0;
}