#include<iostream>
#include<stdio.h>
using namespace std;

int power(double x, double y) {
	double i;
	if (y == 1) { return x; }
	else {
		i = x * power(x, y - 1);
		//power(x, 1) == x;
	}
	return i;
}

int main() {
	double m, n, a;
	cout << "enter a number whose nth power you want" << endl;
	cin >> m;
	cout << "enter the power needed" << endl;
	cin >> n;
	a = power(m, n);
	cout << a;
}
