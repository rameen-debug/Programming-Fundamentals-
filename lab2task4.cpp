#include<iostream>
#include <bitset>
using namespace std;
int main()
{
	unsigned int a = 0, b = 0;

	//Asking user to enter the first value a and second value b in the range (0-255) and show it in binary form

	cout << "\nEnter a number 'a' in the range (0-255):"; 
	cin >> a;
	cout << "The value of " << a << " in binary form is " << bitset<8>(a);

	cout << "\n\nEnter a number 'b' in the range (0-255):";
	cin >> b;
	cout << "The value of " << b << " in binary form is " << bitset<8>(b);

	//In Bitwise AND, the output is 1 only when both a and b are 1.
	unsigned int result_and = a&b;
	cout << "\n\nThe result of Bitwise operator AND is " << result_and<<" in decimal form.";
	cout << "\nThe result of Bitwise operator AND is " << bitset<8>(result_and) << " in binary form.\n";

	//In Bitwise OR, the output is 1 when either or both a and both are 1.
	unsigned int result_or = a | b;
	cout << "\nThe result of Bitwise operator OR is " << result_or << " in decimal form.";
	cout << "\nThe result of Bitwise operator OR is " << bitset<8>(result_or) << " in binary form.\n";

	//In Bitwise XOR, the output is one when a and b differ from eachother.
	unsigned int result_xor = a ^ b;
	cout << "\nThe result of Bitwise operator XOR is " << result_xor << " in decimal form.";
	cout << "\nThe result of Bitwise operator XOR is " << bitset<8>(result_xor) << " in binary form.\n";

	//Left shift 'a' by 2 positions (equal to a*4)
	unsigned int result_ls = (a << 2) & 0xFF; //0xFF is used so that output remains with 8 bits
	cout << "\nThe result of left shift of 'a' by 2 positions is " << result_ls << " in decimal form.";
	cout << "\nThe result of left shift of 'a' by 2 positions is " << bitset<8>(result_ls) << " in binary form.\n";

	//Right shift 'b' by 3 positions (equal to b/8)
	unsigned int result_rs = b >> 3;
	cout << "\nThe result of right shift of 'b' by 3 positions is " << result_rs << " in decimal form.";
	cout << "\nThe result of right shift of 'b' by 3 positions is " << bitset<8>(result_rs) << " in binary form.\n";

	return 0;
}