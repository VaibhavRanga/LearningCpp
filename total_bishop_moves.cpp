#include<iostream>
using namespace std;

int main()
{
    int a, b, total = 0;
    cout<< "Enter a and b"<< endl;
    cin >> a >> b;
    total = min(8 - a, 8 - b);
    total += min(8 - a, b - 1);
    total += min(a - 1, b - 1);
    total += min(a - 1, 8 - b);
    cout << total<< endl;
}