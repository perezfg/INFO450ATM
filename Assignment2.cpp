#include <iostream>

using namespace std;
//Delcaring all my functions
int getAmount();
int getFifty(int val);
int getTwenty(int val);
int getTen(int val);
int getFive(int val);
int getOne(int val);
int main() {
	//Assinging variables for the programs
	int bills, moneyLeft, withdrawal, fifty, twenty, ten, five, one;
	int value = 0;
	char choice = 'Y';
	//While loop for when the user enters Y to continue with other withdrawals
	while (choice == 'y' || choice == 'Y') {
		//Function call to get amount
		withdrawal = getAmount();
		//Used an if statement to break the while loop if user enters '0' per functional requirements
		if (withdrawal == 0)
			break;
		moneyLeft = withdrawal;
		//Function call  to get amount of $50 bills and adjustment of what is left from withdrawal
		fifty = getFifty(moneyLeft);
		withdrawal = withdrawal - (fifty * 50);
		moneyLeft = withdrawal;
		//Function call to get amount of $20 bills and adjustment of what is left from withdrawal
		twenty = getTwenty(moneyLeft);
		withdrawal = withdrawal - (twenty * 20);
		moneyLeft = withdrawal;
		//Function call to get amount of $10 bills and adjustment of what is left from withdrawal
		ten = getTen(moneyLeft);
		withdrawal = withdrawal - (ten * 10);
		moneyLeft = withdrawal;
		//Function call to get amount of $5 bills and adjustment of what is left from withdrawal
		five = getFive(moneyLeft);
		withdrawal = withdrawal - (five * 5);
		moneyLeft = withdrawal;
		//Function call to get amount of $1 bills and adjustment of what is left from withdrawal
		one = getOne(moneyLeft);
		withdrawal = withdrawal - (one * 1);
		//I used if functions to ensure that each function is called and checked to make sure that if any bill was 0, then it won't be displayed.
		if (fifty > 0) {
			cout << "You have " << fifty << " $50.00 bills" << endl;
		}
		if (twenty > 0) {
			cout << "You have " << twenty << " $20.00 bills" << endl;
		}
		if (ten > 0) {
			cout << "You have " << ten << " $10.00 bills" << endl;
		}
		if (five > 0) {
			cout << "You have " << five << " $5.00 bills" << endl;
		}
		if (one > 0) {
			cout << "You have " << one << " $1.00 bills" << endl;
		}
		//Output to user for another withdrawal
		cout << "Another withdrawal?" << endl;
		cin >> choice;
	}
	system("pause");
	return 0;
}
//function to get amount of withdrawal, while checking if amount if indeed between 1 and 300
int getAmount() {
	int value;
	do {
		cout << "Please enter withdrawal amount ---> " << endl;
		cin >> value;
		if (value == 0)
			break;
		else if (value >= 300)
			cout << "Max amount to withdraw is 300..." << endl;
		else if (value <= 1)
			cout << "Minimum amount to withdraw is 1..." << endl;

	} while (value >= 300 || value <=1 || value==0);
	return value;
}
//function to get amount of $50 bills
int getFifty(int val) {
	int bills = val;
	int fiftyCount=0;
	while (bills >= 50) {
		bills -= 50;
		++fiftyCount;
	}
	return fiftyCount;
}
//function to get amount of $20 bills
int getTwenty(int val) {
	int bills = val;
	int twentyCount = 0;
	while (bills >= 20) {
		bills -= 20;
		++twentyCount;
	}
	return twentyCount;
}
//function to get amount of $10 bills
int getTen(int val) {
	int bills = val;
	int tenCount = 0;
	while (bills >= 10) {
		bills -= 10;
		++tenCount;
	}
	return tenCount;
}
//function to get amount of $5 bills
int getFive(int val) {
	int bills = val;
	int fiveCount = 0;
	while (bills >= 5) {
		bills -= 5;
		++fiveCount;
	}
	return fiveCount;
}
//function to get amount of $1 bills
int getOne(int val) {
	int bills = val;
	int oneCount = 0;
	while (bills >= 1) {
		bills -= 1;
		++oneCount;
	}
	return oneCount;
}