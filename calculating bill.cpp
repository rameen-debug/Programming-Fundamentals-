/* An electricity company calculates a household's monthly bill based on units consumed:
First 100 units: Rs. 10 per unit 
Next 100 units (101–200): Rs. 15 per unit 
Above 200 units: Rs. 20 per unit */
#include<iostream>
using namespace std;
int main()
{
	int unit = 0, bill = 0;
	cout << "Enter your no. of units: ";
	cin >> unit;
	if (unit <= 100)
		bill = unit * 10;
	else if (unit > 100 && unit <= 200)
		bill = (100 * 10) + ((unit - 100) * 15);
	else if (unit > 200)
		bill = (100 * 10) + (100 * 15) + ((unit - 200) * 20);

		cout << "The household's monthly bill based on units consumed:" << bill << endl;
	return 0;

}
