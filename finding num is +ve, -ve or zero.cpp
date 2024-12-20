#include<iostream>
using namespace std;

int main() {
	int num;
	
	cout << "Enter an integer";
	cin >> num;
	
	if (num < 0) {
		cout << num << " is a negative number";
	}
	else if (num > 0) {
		cout << num << " is a positive number";
	}
	else {
		cout << "Entered value is zero";
	}
}