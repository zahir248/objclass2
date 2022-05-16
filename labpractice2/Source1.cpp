#include <iostream>
#include "Header.h"
using namespace std;

void main() {

	double amount;
	double rate;
	double currency;

	MYRCurrency zahir;

	cout << "enter amount: ";
	cin >> amount;

	cout << "enter rate: ";
	cin >> rate;

	currency = zahir.convertCurrency(amount, rate);

	cout << "\nconverted currency is : RM " << currency;
}