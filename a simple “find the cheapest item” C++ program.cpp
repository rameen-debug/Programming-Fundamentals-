#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	int N = 0; //Number of items
	double price = 0,l_price = 0; //price = current item's price, l_price = lowest price so far
	string name,l_name; //name = current item's name, l_name = name of item having lowest price so far

	//Ask user to enter number of items
	cout << "Enter the number of items (N): "; 
	cin >> N;

	// Read the first item and treat it as the lowest for now
	cout << endl << "Enter name of item 1: "; 
	cin >> name;
	cout << "Enter price of item 1: $";
	cin >> price;
	l_price = price;
	l_name = name;

	// Read items 2 to N and compare each one with the lowest so far
	for (int i = 2;i <= N;i++)
	{
		cout << endl << "Enter name of item " << i << ": ";
		cin >> name;
		cout << "Enter price of item " << i << ": $";
		cin >> price;

		// If this item is cheaper, it becomes the new lowest
		if (price < l_price)
		{
			l_price = price;
			l_name = name;
		}
		else if (price == l_price) //For items having same price
		{
			l_name = l_name + " and " + name;
		}
	}
	// Display the item with the lowest price
	cout << fixed << setprecision(2);
	cout << endl << "The item " << l_name << " has the lowest price that is $" << l_price << "." << endl;
	return 0;
}
