// Big O(2n)-> Big O(n) -> Linear time-> Fibonacci sequence
/**
* For example, in O(2n) the constant 2 can be dropped. 
* In proper Big O Notation, O(2n) is written as O(n). 
* In fact, O(2n) and O(3n) can both be simplified to O(n 
*/
#include <iostream>
using namespace std;

int fibonacci(int num);


int main()
{
  int x = 50;
  cout << fibonacci(x)<<endl;
  return 0;
}


int fibonacci(int num)
{
  if (num <=1 ) return num;
  return fibonacci (num-2) + fibonacci(num-1);
}
