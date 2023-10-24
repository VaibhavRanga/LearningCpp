#include <iostream>
using namespace std;

int main()
{
    int answer = 0, number, remainder, mul = 1;
    cout << "Enter a number" << endl;
    cin >> number;

    while (number != 0)
    {
        remainder = number % 2;
        answer = answer + (remainder * mul);
        mul = mul * 10;
        number = number / 2;
    }
    cout << answer << endl;
}
