#include<iostream>
using namespace std;

int main() {
    int num, numOfDigits = 0, ans = 0, temp;
    cout << "Enter a positive number " << endl;
    cin >> num;
    if (num < 1)
    {
        cout << "Invalid input" << endl;
        return 0;
    }
    
    temp = num;
    while (temp)
    {
        numOfDigits++;
        temp /= 10;
    }
    temp = num;
    while (temp)
    {
        int base, resultOfPower = 1;
        base = temp % 10;

        for (int i = 0; i < numOfDigits; i++)
        {
            resultOfPower *= base;
        }
        ans += resultOfPower;
        temp /= 10;
    }
    if (num == ans)
    {
        cout << "Armstrong" << endl;
    }
    else
        cout << "Not armstrong" << endl;
}
