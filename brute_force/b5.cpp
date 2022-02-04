// Brute Force in Searching
#include <iostream>

using namespace std;

int search(int arr[], int n, int x);

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 50;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, n, x);
    (result == -1) ? cout << "Data not found"
                   : cout << "Data found at position " << result + 1 << endl;
    return 0;
}

int search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
