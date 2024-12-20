#include<iostream>
using namespace std;

int main() {
	int num;
	
	cout << "Enter a number: ";
	cin >> num;
	
	int a = 0, b = 1, nextTerm;
	for (int i = 0; i< num; i++) {
		cout << a << " ";
		nextTerm = a + b;
		a = b;
		b = nextTerm;
	}
	return 0;
}