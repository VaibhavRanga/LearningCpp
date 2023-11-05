#include<iostream>
using namespace std;

int main()
{
    long ans = 1;
    for (int i = 0; i < 64; i++)
        ans *= 2;
    cout << ans << endl;
}