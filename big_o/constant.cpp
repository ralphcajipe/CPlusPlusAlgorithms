// Big O(1) -> Constant -> constant time
#include <iostream>

using namespace std;

void printFirstElementOfArray(int arr[]);

int main() 
{
    int a[] = {100, 2, 3, 4, 5, 6, 7, 8, 10};
    printFirstElementOfArray(a);
    return 0;
}

void printFirstElementOfArray(int arr[]) 
{
    cout << "First Element of array = " << arr[0] << endl;
}
