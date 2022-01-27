// Tail recursion
#include <iostream>
using namespace std;

void fun(int n){
    if (n == 0)
        return;
    else
        printf("%d ", n);
    return fun(n-1);
}

int main(){
    fun(3);
    return 0;
}