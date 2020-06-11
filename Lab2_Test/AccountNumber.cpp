
#include <cstring>
#include "pch.h"

using namespace std;


void AccountNumber::setAccountNumber(int bankc, int branchc, int an)
	{
		bankCode = bankc;
		branchCode = branchc;
		accountNumber = an;
		validAccNumber = bankc >= MIN_BANKCODE && bankc <= MAX_BANKCODE &&
			branchc >= MIN_BRANCHCODE && branchc <= MAX_BRANCHCODE &&
			an >= MIN_ACCNO && an <= MAX_ACCNO;
	}

	void AccountNumber::display(char name[41]) const
	{
		if (isValid())
		{
			cout << "Name:" << name << ", Account number: " << bankCode << "-"
				<< branchCode << "-" << accountNumber << endl;
		}
		else
		{
			cout << name << " does not have a valid account number." << endl;
		}
	}

	bool AccountNumber::isValid() const
	{
		return validAccNumber;
	}

	


