#include <iostream>
#include "xrange.h"

using std::cout;
using std::endl;
using utils::xrange;

void upToTen() {
	for (auto& x : xrange(10)) {
		cout << x << " ";
	}
	cout << endl;
}

void fromTwoToTen() {
	for (auto& x : xrange(2, 10)) {
		cout << x << " ";
	}
	cout << endl;
}

void fromTwoToTenWithStep() {
	for (auto& x : xrange(2, 10, 2)) {
		cout << x << " ";
	}
	cout << endl;
}


int main() {
	upToTen();
	fromTwoToTen();
	fromTwoToTenWithStep();
}