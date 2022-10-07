#include <iostream>
using namespace  std;
int fib(int n)
{
        if (n == 0 || n == 1 )
            return n;


    int p1 = 0;
    int p2 = 1;
    int val;
    for (int i = 2; i <= n; i++)
    {
        val = p1 + p2;
        p1 =  p2;
        p2 = val;
    }
    return val;
}

int main() {

    int k = 20;
    long long start = 7;
    long long end = 100;

    for (int i = 0 ; fib(i) < end ; i++) {
        if(fib(i) >= start && fib(i) <= end)
            cout<<(fib(i))<<"  ";
    }



    return 0;
}
