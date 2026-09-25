#include<iostream>
using namespace std;
int main()
{
	//Declare the variable for marks
	int marks = 0;

	//Prompt the user to enter marks
	cout << "Enter student marks: ";
	cin >> marks;
	
	//Using an else-if ladder to print out the grade
	if (marks >= 70)
		cout << "The grade for " << marks << " marks is A."<<endl; //Marks 70 or above = A
	else if (marks >= 60 && marks < 70)
		cout << "The grade for " << marks << " marks is B+."<<endl; //Marks in range [60,70) = B+
	else if (marks >= 50 && marks < 60)
		cout << "The grade for " << marks << " marks is B."<<endl; //Marks in range [50,60) = B
	else if (marks >= 40 && marks < 50)
		cout << "The grade for " << marks << " marks is C."<<endl; //Marks in range [40,50) = C
	else if (marks < 40)
		cout << "The grade for " << marks << " marks is F."<<endl; //Marks below 40 = F
	return 0;
}