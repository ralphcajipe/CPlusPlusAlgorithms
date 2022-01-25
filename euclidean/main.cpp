/* Program that demonstrates the Euclidean algorithm
 * Math reference: How to Find the Greatest Common Divisor by Using the Euclidean Algorithm
 * https://youtu.be/JUzYl1TYMcU
 */

// Import Libraries
#include <iostream>

using namespace std;

// Function Prototypes
int gcd(int, int);

// Main function
int main() {
    int first_number, second_number;
    first_number = 10;
    second_number = 45;
    /* GCD(a, b) = */
    // << "GCD("
    // << a
    // << ", "
    // << b
    // << ") =
    cout << "GCD(" << first_number << ", " << second_number << ") = " << gcd(first_number, second_number);
    return 0;
}


/* Function Specifications */

int gcd(int first_number, int second_number)
/* Recursive function */
{
    if (first_number == 0)
        return second_number;
    return gcd(second_number % first_number, first_number);
}