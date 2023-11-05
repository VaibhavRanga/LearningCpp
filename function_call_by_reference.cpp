#include<iostream>
using namespace std;

void sum(int &a, int b)
{
    a = a + b;
}

int main()
{
    int a = 5, b = 10;
    sum(a, b);
    cout << a <<endl;
}
