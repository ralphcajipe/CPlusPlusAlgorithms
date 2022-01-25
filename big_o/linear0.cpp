// Big O(n) -> Linear time-> n is the number of items
// in the array
// it varies on a size of 100,1000,10000000 etc.
#include <iostream>

using namespace std;

void printAllelementsOfArray(int arr[], int size);

int main() 
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,};
    int n = 10;
    printAllelementsOfArray(a, n);
    return 0;
}

void printAllelementsOfArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }

}
