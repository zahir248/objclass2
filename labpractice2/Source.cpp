#include <iostream>
#include "Header.h"
using namespace std;

MYRCurrency::MYRCurrency() {
	amount = 0;
	rate = 0;
}
MYRCurrency::MYRCurrency(double z, double m) {
	amount = z;
	rate = m;
}

MYRCurrency::~MYRCurrency() {}

double MYRCurrency::convertCurrency(double amount, double rate) {
	return(amount * rate);
}