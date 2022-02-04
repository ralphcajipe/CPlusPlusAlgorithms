// Brute Force: Problem 1
// Given n, find a number of ways we can
// add 3 non-negative integers so that the sum is n.

// input n = 1
// output (a+b+c=n) = 3
// (1,0,0) (0,1,0) (0,0,1)

// input n = 2
// output (a+b+c=n) 6
// (2,0,0)(0,2,0)(0,0,2)(1,1,0)(1,0,1)(0,1,1)

// input n = 3
// output (a+b+c=n) (10)
// (3,0,0)(0,3,0)(0,0,3)(1,2,0)(1,0,2)(0,1,2)
// (2,1,0)(2,0,1)(0,2,1)(1,1,1)

#include <iostream>

using namespace std;

int CountIntegralSolution(int n);

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << CountIntegralSolution(n) << endl;
    return 0;
}

int CountIntegralSolution(int n) {
    //result
    int result = 0;
    int i, j, k;
    for (i = 0; i <= n; i++)
        for (j = 0; j <= n - i; j++)
            for (k = 0; k <= (n - i - j); k++)
                if (i + j + k == n) {
                    cout << "(" << i << "," << j << "," << k
                         << ")" << endl;
                    result++;
                }
    return result;
}
