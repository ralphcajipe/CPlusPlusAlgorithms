// Find 3 elements whose sum is equal to zero
#include <iostream>

using namespace std;

void findTriplets(int arr[], int n);

int main() 
{
    int arr[] = {30, -40, -20, -10, 40, 0, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    findTriplets(arr, n);
    return 0;
}

void findTriplets(int arr[], int n) 
{
    // Print all triples arr[] with sum 0
    bool found = true;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] << endl;
                    found = true;
                }
            }
        }
    }
    if (found == false)
        cout << "no triplets found " << endl;
}
