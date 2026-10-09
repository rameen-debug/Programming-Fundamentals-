#include<iostream>
#include<cstdlib> //for rand()
#include<ctime> //for time()
using namespace std;

int main()
{
	//seed the random generator so the number is different everytime
	srand(time(NULL));
	//Secret number stored in num between 1 and 10
	int num = rand() % 10 + 1;
	//initialise the variable. Guess will store the number that the user enters whereas tries will count the number of tries.
	int guess = 0, tries = 1;
	cout << "I have chosen a number between 1 and 10. Try to guess it." << endl;
	cout << "Your Guess: "; //Prompt the user to enter a guess number
	cin >> guess;
	while (guess != num) //If guess is not correct, display a hint and prompt the user to guess again.
	{
		if (guess > num) 
			cout << "That is incorrect. You have entered a greater number. Guess again." << endl;
		else if (guess < num)
			cout << "That is incorrect. You have entered a smaller number. Guess again." << endl;
		cout << "Your Guess: ";
		cin >> guess; //Update the guess variable
		tries++; //Increment the tries variable by 1..
	}
	cout << "That's right! You guessed it." << endl; //Display the message if user guesses the correct number
	cout << "It only took you " << tries << " tries."<<endl; //Display the number of tries it took for user to guess it.
}
