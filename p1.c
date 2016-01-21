#include <iostream>
#include <cstdio>

using namespace std;

void invers()
{
    char l;
    l=getchar();
    if (l !='\n') invers();
      cout<<l;

}
int main()
{
    cout <<"introduceti un cuvant: ";
    invers();
    return 0;
}
