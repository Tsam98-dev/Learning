#include <iostream>
using namespace std;
double add(double a, double b) {
	return a + b;
}
double sub(double a, double b) {
	return a - b;
}
double mul(double a, double b) {
	return a * b;
}
double division(double a, double b) {
	if (b == 0) {
		cout << "Cannot divide by 0";
	}
	else {
		return a / b;
	}
}
int mod(int a, int b) {
	if (b == 0) {
		cout << "Cannot divide by 0";
	}
	else {
		return a % b;
	}
}
void selectmethod(int a) {
	double x, y;
	double (*ptr)(double, double);
	int (*pointer)(int, int) = &mod;
	switch (a) {
	case 1:
		ptr = &add;
		cout << "Enter first number:";
		cin >> x;
		cout << "Enter second number:";
		cin >> y;
		cout << (*ptr)(x, y) << endl;
		break;
	case 2:
		ptr = &sub;
		cout << "Enter first number:";
		cin >> x;
		cout << "Enter second number:";
		cin >> y;
		cout << (*ptr)(x, y) << endl;
		break;
	case 3:
		cout << "Enter first number:";
		cin >> x;
		cout << "Enter second number:";
		cin >> y;
		ptr = &mul;
		cout << (*ptr)(x, y) << endl;
		break;
	case 4:
		ptr = &division;
		cout << "Enter first number:";
		cin >> x;
		cout << "Enter second number:";
		cin >> y;
		cout << (*ptr)(x, y) << endl;
		break;
	case 5:
		cout << "Enter first number:";
		cin >> x;
		cout << "Enter second number:";
		cin >> y;
		cout << (*pointer)(x, y) << endl;
		break;
	}
}
int main() {
	int a;
	bool con = true;
	try {
		while (con) {
			cout << "0. Exit" << endl;
			cout << "1. addition" << endl;
			cout << "2. subtraction" << endl;
			cout << "3. multiplication" << endl;
			cout << "4. division" << endl;
			cout << "5. modulus" << endl;
			cout << "Enter number to select:" << endl;
			cin >> a;
			if (a == 0) {
				con = false;
			}
			else if (a < 0 || a>5) {
				cout << "The selection invalid. Please select again." << endl;
			}
			else {
				selectmethod(a);
			}

		}
	}
	catch (int e) {
		cout << "An error occur: " + e << endl;
	}
	return 0;
}