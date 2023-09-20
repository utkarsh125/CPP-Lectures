#include <iostream>

using namespace std;



double power(double x, int n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        double temp = power(x, n / 2);
        return temp * temp;
    } else {
        double temp = power(x, (n - 1) / 2);
        return x * temp * temp;
    }
}

int main() {
    double base = 2.0;
    int exponent = 10;
    double result = power(base, exponent);
    cout << base << "^" << exponent << " = " << result << endl;
    return 0;
}
