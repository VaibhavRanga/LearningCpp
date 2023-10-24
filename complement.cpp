#include<iostream>
using namespace std;

int main()
{
    int num, rem, ans = 0, mul = 1;

    cout << "Enter a number" << endl;
    cin >> num;

    while (num)
    {
        rem = num % 2;
        rem ^= 1;
        ans += rem * mul;
        mul *= 2;
        num /= 2;
    }
    cout << ans << endl;
}