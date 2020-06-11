#ifndef ACCOUNTNUMBER_H_
#define ACCOUNTNUMBER_H_

#define MAX_NAME_LENGTH 40
#define MIN_BANKCODE    100
#define MAX_BANKCODE    999
#define MIN_BRANCHCODE  1
#define MAX_BRANCHCODE  220
#define MIN_ACCNO       10000
#define MAX_ACCNO       99999



class AccountNumber {
private:
	int bankCode;
	int branchCode;
	int accountNumber; 
	bool validAccNumber;

public:

	void setAccountNumber(int bankc, int branchc, int an);
	

	void display(char name[41]) const;

	bool isValid() const;
	



};


#endif

