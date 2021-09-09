#include<iostream>
using namespace std;

int fact(int a) {
	int c;
	if (a == 1) return 1;
	c = a * fact(a - 1);

	return c;
}

int main(){
int n,b,c;
cout << "enter a number to calculate its factorial" << endl;
cin >> n;
b = fact(n);
cout << b;
}
