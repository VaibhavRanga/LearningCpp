#include<iostream>
using namespace std;

long factorial(int num)
{
    long ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
    return ans;
}

int trailingZeros(long num)
{
    int zeros = 0;
    while(num % 10 == 0)
    {
        zeros++;
        num /= 10;
    }
    return zeros;
}

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    long fact = factorial(num);
    cout << trailingZeros(fact) << endl;
}
