// Big O(n^2) -> Quadratic -> 2 loops
#include <iostream>

using namespace std;

void printAllPossibleOrderedPairs(int arr[], int size);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    printAllPossibleOrderedPairs(a, n);
    return 0;
}

void printAllPossibleOrderedPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << " " << arr[i] << " " << arr[j] << endl;
        }
    }
}
