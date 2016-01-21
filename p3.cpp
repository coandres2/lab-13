#include <iostream>
#include <cstdio>

using namespace std;

int fib(int n)
{
    if (n<=2) return 1;
    else return fib(n-1)+fib(n-2);
}



int main()
{


int a;
cout<<"Introduceti un numar: "; cin>>a;
cout<<"elementul "<<a<<"este fbb"<<fib(a);


    return 0;
}
