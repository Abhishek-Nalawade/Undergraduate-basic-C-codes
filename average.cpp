#include<iostream>

using namespace std;

int main() {
    cout << "enter all your marks one by one by pressing enter and -1 to stop " << endl;
    float a, b, sum =0, i = 0, marks = 0;
    for (b = 0; marks >= 0; b = sum) {
        cin >> marks;
        sum = b + marks;
        i = i + 1;
    }
    a = (sum+1) / (i-1);
    cout << "your average is " << a;
}
