// binary_search_recursive.cpp: Ralph Cajipe
/*
Description: also known as half-interval search,
logarithmic search, or binary chop, is a search algorithm that
finds the position of a target value within a sorted array.
Binary search compares the target value to the middle element of the array.
 */

/*
Binary Search (Recursive function)
-> data sorted -> ascending or descending order
*/

#include <iostream>

using namespace std;

// Function prototype
int binary_search(int [], int, int, int);


/* Function Definition */

// Returns index of x in arr if present, else -1
int binary_search(int arr[], int low, int high, int x) {

    // Check base case
    if (high >= low) {
        int middle = (high + low) / 2;

        // If element is present at the middle itself
        if (arr[middle] == x) {
            return middle;
        }

            // If element is smaller than mid, then it can only
            // be present in left subarray
        else if (arr[middle] > x) {
            return binary_search(arr, low, middle - 1, x);
        }

            // Else the element can only be present in right subarray
        else {
            return binary_search(arr, middle + 1, high, x);
        }
    } else {
        // Element is not present in the array
        return -1;
    }

}


// Test array
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;

    cout << "Enter the number to search: ";
    cin >> x;

    // Function call
    int result = binary_search(arr, 0, sizeof(arr) - 1, x);

    if (result != -1) {
        cout << "Element is present at index " << to_string(result) << endl;
    } else {
        cout << "Element is not present in array." << endl;
    }
    return 0;
}

