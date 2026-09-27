/*Program to to calculate and display Mary Kettleson’s annual bonus based 
on her annual sales amount*/
#include<iostream>
using namespace std;
int main()
{
	/*Declare the variables for bonus and annual sales
	using double which is more precise than float.*/
	double a_sales = 0, bonus = 0;
	//Prompt the user to enter annual sales
	cout << "Enter Annual Sales: $";
	cin >> a_sales;
	//Check if the annual sales are atleast 15,000
	if (a_sales >= 15000)
		bonus = 0.02 * a_sales; //if yes then bonus is 2% of the sales.
	else
		bonus = 0.015 * a_sales; //otherwise the bonus is 1.5%
	//Display the bonus amount
	cout << "Bonus: $" << bonus << endl;
	return 0;
}