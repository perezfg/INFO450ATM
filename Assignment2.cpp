#include <iostream>

using namespace std;
int getAmount();
int getFifty(int val);
int getTwenty(int val);
int getTen(int val);
int getFive(int val);
int getOne(int val);
int main() {
	int bills, moneyLeft, withdrawal, fifty, twenty, ten, five, one;
	int value = 0;
	char choice = 'Y';
	while (choice == 'y' || choice == 'Y') {
		withdrawal = getAmount();
		if (withdrawal == 0)
			break;
		moneyLeft = withdrawal;
		fifty = getFifty(moneyLeft);
		withdrawal = withdrawal - (fifty * 50);

		moneyLeft = withdrawal;
		twenty = getTwenty(moneyLeft);
		withdrawal = withdrawal - (twenty * 20);

		moneyLeft = withdrawal;
		ten = getTen(moneyLeft);
		withdrawal = withdrawal - (ten * 10);

		moneyLeft = withdrawal;
		five = getFive(moneyLeft);
		withdrawal = withdrawal - (five * 5);

		moneyLeft = withdrawal;
		one = getOne(moneyLeft);
		withdrawal = withdrawal - (one * 1);

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

		cout << "Another withdrawal?" << endl;
		cin >> choice;
	}
	system("pause");
	return 0;
}

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

int getFifty(int val) {
	int bills = val;
	int fiftyCount=0;
	while (bills >= 50) {
		bills -= 50;
		++fiftyCount;
	}
	return fiftyCount;
}
int getTwenty(int val) {
	int bills = val;
	int twentyCount = 0;
	while (bills >= 20) {
		bills -= 20;
		++twentyCount;
	}
	return twentyCount;
}
int getTen(int val) {
	int bills = val;
	int tenCount = 0;
	while (bills >= 10) {
		bills -= 10;
		++tenCount;
	}
	return tenCount;
}
int getFive(int val) {
	int bills = val;
	int fiveCount = 0;
	while (bills >= 5) {
		bills -= 5;
		++fiveCount;
	}
	return fiveCount;
}
int getOne(int val) {
	int bills = val;
	int oneCount = 0;
	while (bills >= 1) {
		bills -= 1;
		++oneCount;
	}
	return oneCount;
}