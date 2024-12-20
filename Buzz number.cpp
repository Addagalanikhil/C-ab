#include<iostream>
using namespace std;

int main() {
	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	if ((num % 7 == 0) || (num % 10 == 7)) {
		cout << num << " is a Buzz number";
	}
	else {
		cout << num << " is not a Buzz number";
	}
	return 0;
}