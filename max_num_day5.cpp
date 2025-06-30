#include <iostream>
using namespace std;

int customMax(int a, int b, int c) {
    if (a == b && b == c) {
        return 0;  // All equal
    }

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

    return maxVal;  // Only one max
}

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    int result = customMax(a, b, c);
    cout << "Result: " << result << endl;

    return 0;
}
