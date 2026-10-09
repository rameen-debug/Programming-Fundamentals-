#include<iostream>
using namespace std;
int main()
{
	// N = how many numbers the user will enter, i = counts which number we are on
	int N = 0, i = 1;
	/* x = the current number entered, sum = running total of reciprocals (1/x),
	harmonic_mean = final answer */
	double x=0, sum = 0, harmonic_mean = 0;
	//Prompt the user to enter count of numbers (N)
	cout << "Enter the count of numbers (N):";
	cin >> N;
	// do-while loop: runs the body first, then checks the condition at the end
	do
	{
		//Prompt the user to enter i-th number
		cout << "Enter number " << i << ": ";
		cin >> x;
		//Take its reciprocal and add it to sum
		sum = sum + (1.0/ x);
		//Move on to next number
		i++; 
	} while (i <= N); // keep looping until all N numbers have been entered

	// Only calculate if sum is not zero, to avoid dividing by zero
	if (sum != 0)
	{
		harmonic_mean = N / sum;
		cout << "The harmonic mean will be: " << harmonic_mean << endl;
	}
	else // Sum is zero, so N / sum would be infinity
		cout << "The harmonic mean can't be calculate as sum is zero. It will give infinity.";
	return 0;

}
