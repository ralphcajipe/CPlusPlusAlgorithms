// Factorial using Iteration
#include <iostream>

using namespace std;

int main() {
    int n, i;
    unsigned long long factorial = 1;
    cout << "Enter a positive number: ";
    cin >> n;
    if (n < 0)
        cout << "Numbers is negative";
    else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
            cout << i << "*" << i + 1 << " ="
                 << factorial << endl;
        }
        cout << "Factorial value is " << factorial << endl;
    }
    return 0;
}
