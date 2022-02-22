/* Russian Peasant Multiplication
 *
 * RPM may be slow, but it requires less memorization up front because it
 * doesn’t require knowledge of most of the multiplication table. Sometimes
 * it can be very useful to sacrifice a little speed for the sake of low memory
 * requirements, and this speed/memory tradeoff is an important consideration in many situations where we’re designing and implementing
 * algorithms.
 */

#include <iostream>

using namespace std;

int main() {
    int num1, num2, product = 0;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if (num1 % 2 != 0)
        product = product + num2;

    cout << "Multiplicand Multiplier Product\n";
    cout << "\t" << num1 << "\t" << num2 << endl;

    while (num1 != 1) {
        num1 = num1 / 2;
        num2 = num2 * 2;
        if (num1 % 2 != 0) {
            product = product + num2;
            cout << "\t" << num1 << "\t" << num2 << endl;
        }

    }

    cout << "The product is: " << product;
}
