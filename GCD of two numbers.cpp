
#include<iostream>
using namespace std;

int main() {
	int a, b;
	
	cout << "Enter two number values: ";
	cin >> a >> b;
	
	do {
		if (a>b) {
			a = a - b;
		} 
		else {
			b = b - a;
		}

	}while(a!=b);
	
	cout << "GCD of " << "a" << " and " << "b" << " is " << a << endl;
	return 0;
}