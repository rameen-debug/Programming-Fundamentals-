#include<iostream>
using namespace std;
int main()
{
	//Declare the prodnum and quantity as integers
	int prodnum = 0, quantity = 0;

	//Declare rate and total amount as decimals
	float rate = 0, totalamount = 0;

	//Display the product numbers and their prices to choose from to the user
	cout << "Prices for Products (1-5) in Jerilli's Trading Store" << endl;
	cout << "Product Number: 1	Price: $2.98" << endl;
	cout << "Product Number: 2	Price: $4.50" << endl;
	cout << "Product Number: 3	Price: $9.98" << endl;
	cout << "Product Number: 4	Price: $4.49" << endl;
	cout << "Product Number: 5	Price: $6.87" << endl;

	//Prompt the user to enter a product number from the list
	cout << endl << "Enter a product number (from the provided product list): ";
	cin >> prodnum;

	//Use switch statement to determine each product's rate
	switch (prodnum)
	{
		case 1:
			rate = 2.98; //rate of product number 1 in dollars
			break;
		case 2:
			rate = 4.50; //rate of product number 2 in dollars
			break;
		case 3:
			rate = 9.98; //rate of product number 3 in dollars
			break;
		case 4:
			rate = 4.49; //rate of product number 4 in dollars
			break;
		case 5:
			rate = 6.87; //rate of product number 5 in dollars
			break;
		default:
			cout << "\nThe product number entered is invalid." << endl; //product number entered not in list
			return 0; //exit the program here
	}

	//Prompt the user to enter quantity of product purchased
	cout << endl << "Enter the quantity of product purchased by customer: ";
	cin >> quantity;

	//Check if quantity is valid
	if (quantity <= 0)
	{
		cout << "\nThe quantity entered is invalid."<<endl;
		return 0; //exit the program here
	 }

	//Calculate the total amount
	totalamount = rate * quantity;

	//Apply a 10% discount if quantity is greater than 5
	if (quantity>5)
		totalamount = totalamount - (0.1 * totalamount);

	//Display the final amount owed by the customer
	cout <<endl<< "The total amount owed by the customer: $" << totalamount << endl;
	return 0;
}