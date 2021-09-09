#include<iostream>
using namespace std;

int oct(int m) {
	int b, c =1, d, sum = 0, n = 0;

	for (; c > 0; m = c) {
		b = m % 10;
		c = m / 10;
		d = b * (8^n);
		n = n + 1;
		sum = sum + d;
	}
	return sum;
}

void dec(int c) {
	int i, a =1;
	for (; a > 0; c = a) {
		i = c % 8;
		a = c / 8;
		cout << i;
	}
}

int main(){
int a,e,f;
cout << "enter any number ";
cin >> a;
cout << "enter 1 to convert octal to decimal" << endl << "enter 0 to convert decimal to octal" << endl;
cin >> f;
if (f == 1) {
e = oct(a);
cout << e;
}
else if (f == 0)
dec(a);
else cout << "please enter valid input";
}
