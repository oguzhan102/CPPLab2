#include <iostream>
#include "AccountNumber.h"
#include "pch.h"

using namespace std;


int main()
{
	AccountNumber myNumber;
	char name[41];
	int bankCode;
	int branchCode;
	int accNumber;

	cout << "Bank account app" << endl <<
		"===================" << endl << endl;
	cout << "Please enter your name: ";
	cin >> name;
	cout << "please enter your bank account, branch code" <<
		", and account number as follows:" << endl << "999 999 99999: ";

	do
	{
		cin >> bankCode >> branchCode >> accNumber;
		myNumber.setAccountNumber(bankCode, branchCode, accNumber);
		myNumber.display(name);
	} while (!myNumber.isValid() && cout << "Invalid account number, (999 999 99999), try again: ");

	cout << "Thank you!" << endl;

	return 0;
}
