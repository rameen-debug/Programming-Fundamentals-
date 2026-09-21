#include<iostream>
using namespace std;
int main()
{
	/* PART 1: Declare variables of fundamental types 
	We dont need to initialize meaningful values here as the sizeof() function
	only measures the storage size of the data type. */

	int account_number;
	float transaction_amount;
	double large_amount; //just to show the memory occupied by double data type
	char account_status;
	bool active_status;

	/* PART 2: Display memory occupied by each data type in bytes. Here, sizeof() is used to
	to show how many bytes are reserved by compiler for each data types.*/

	cout << "\nMemory Occupied by Each Data Type in Bytes\n";
	cout << "\nint	:" << sizeof(int) << " bytes";
	cout << "\nfloat	:" << sizeof(float) << " bytes";
	cout << "\ndouble	:" << sizeof(double) << " bytes";
	cout << "\nchar	:" << sizeof(char) << " bytes";
	cout << "\nbool	:" << sizeof(bool) << " bytes";

	/*PART 3: Displaying the memory occupied by each variable in bytes. This confirms that a variable takes up exactly as much space as
    its declared type, sizeof(variable) and sizeof(type) will match */

	cout << "\n\nMemory Occupied by Each Variable in Bytes\n";
	cout << "\nAccount Number		:" << sizeof(account_number) << " bytes";
	cout << "\nTransaction Amount	:" << sizeof(transaction_amount) << " bytes";
	cout << "\nAccount Status		:" << sizeof(account_status) << " bytes";
	cout << "\nActive Status		:" << sizeof(active_status) << " bytes";

	/*PART 4: Total size of a single record can be calculated by adding the
	individual sizes of all the variables being used*/

	int sizeofsingle_accrecord = sizeof(account_number) + sizeof(transaction_amount) + sizeof(account_status) + sizeof(active_status);
	cout << "\n\nThe total memory required for a Single Account Record is " << sizeofsingle_accrecord << " bytes";

	/*PART 5: Taking input from the user for any number of account records(numbrecords).This asks the user
	how many account records the program should have. */

	int numrecords = 0;
	cout << "\n\nEnter any number of account records:";
	cin >> numrecords;

	//PART 6: Total Memory required for any number of account records can be calculated as follows
	int totalmemoryforN = numrecords * sizeofsingle_accrecord;

	//PART 7: The final results are as follows
	cout << "\n\nFINAL RESULTS\n";
	cout << "\nNumber of Account Records (N): " << numrecords;
	cout << "\nMemory Occupied by a Single Account Record: " << sizeofsingle_accrecord << " bytes";
	cout << "\nTotal Memory Required for N number of Records: " << totalmemoryforN<<" bytes\n\n";

	return 0;
}
