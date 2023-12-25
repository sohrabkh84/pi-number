#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x) {
    return sqrt(1 - x*x);
}

double integral(double (*func)(double), double a, double b, int  n) {
    double h = (b - a) / n;
    double result =  (func(a) + func(b));

    for (double i = 0; i <= n; i++) {
        result += func(a+ i * h);
        cout << result << endl;
    }

    result *= h;

    return result;
}

int main() {
    double a = 0.0;
    double b = 1.0;
    long double result =   4* integral(f, a, b, 1000000000);

    std::cout << "pi number is" <<setprecision(80) << result << std::endl;

    return 0;
}
