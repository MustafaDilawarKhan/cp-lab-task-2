#include<iostream>
using namespace std;

// Function 2
double power(double x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}

// Function 2
double calculate(double x, int term) {
    double sum = 0.0;

    for (int i = 0; i < term; ++i) {
        double term = power(-1, i) * power(x, 2 * i + 1);
        sum += term;
        cout << term << endl;
    }

    return sum;
}

int main() {
    double x;
    int term;

    cout << "Input the value of x: ";
    cin >> x;

    cout << "Input number of terms: ";
    cin >> term;

    double Sum = calculate(x, term);

    cout << "The sum of the series up to " << term << " terms is: " << Sum << endl;

    return 0;
}
