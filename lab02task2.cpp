//program to solve the given expression
#include<iostream>
using namespace std;
int main()
{
	//delcare integer variables
	int a = 5, b = 3, d = 6;
	//declare decimal variables
	float c = 4.5, r = 6.12;

	//terms being calculated separately
	float term1 = 4.0 / (3.0 * (r + 34));
	float term2 = 9.0 * (a + b * c);
	float term3 = (3.0 + d * (2.0 + a)) / (a + (b * d));

	//final solution
	float solution = term1 - term2 + term3;

	//printing the solution out
	cout << "The solution of the given expression is " << solution<< "\n";
	return 0;

}