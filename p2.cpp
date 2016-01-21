#include <iostream>
#include <cstdio>

using namespace std;

int cmmdc(int x, int y)
{    cout<<"x="<<x<<"    y"<<y<<endl;
    if (x==y) return x;
    if(x>y) x=x-y;
    else y=y-x;
    cmmdc(x,y);
}


int main()
{
    int a,b;
    cout<<"Int un numar : ";cin>>a;
    cout<<"int un alt nr : ";cin>>b;
    cout<<"CMMDC este:"<<cmmdc(a,b);
    return 0;
}
