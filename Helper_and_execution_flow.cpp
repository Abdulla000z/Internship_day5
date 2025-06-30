#include <iostream>
using namespace std;

// Banner Function
void printBanner(string message) {
    cout << "\n==============================\n";
    cout << "  " << message << endl;
    cout << "==============================\n";
}

// Factorial Function
int factorial(int n) {
    if (n > 12) {
        cout << "Warning: Input too large. Factorial may cause overflow." << endl;
        return -1;
    }
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// Custom Max Function
int customMax(int a, int b, int c) {
    if (a == b && b == c) return 0;

    int maxVal = a;
    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;

    int count = 0;
    if (a == maxVal) count++;
    if (b == maxVal) count++;
    if (c == maxVal) count++;

    if (count >= 2) {
        int sum = 0;
        if (a == maxVal) sum += a;
        if (b == maxVal) sum += b;
        if (c == maxVal) sum += c;
        return sum;
    }

    return maxVal;
}

// Main Function
int main() {
    // Factorial
    printBanner("FACTORIAL TASK");
    int n;
    cout << "Enter a number to find factorial: ";
    cin >> n;

    int factResult = factorial(n);
    if (factResult != -1)
        cout << "Factorial of " << n << " is " << factResult << endl;

    // Max Number Task
    printBanner("CUSTOM MAX TASK");
    int x, y, z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;

    int maxResult = customMax(x, y, z);
    cout << "Custom Max Result: " << maxResult << endl;

    return 0;
}
