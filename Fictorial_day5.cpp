#include <iostream>
using namespace std;

int factorial(int n) {
    if (n > 12) {
        cout << "Warning: Input too large. Factorial may cause overflow." << endl;
        return -1;
    }
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = factorial(n);
    if (result != -1)
        cout << "Factorial of " << n << " is " << result << endl;

    return 0;
}
