#include<iostream>
using namespace std;

int main() {
	int avg, sum;
	int a, b, c;
	
	cout << "Enter a& b& c values: ";
	cin >> a >> b >> c;
	
	sum = a + b + c;
	avg = sum/3;
	cout << avg;
}