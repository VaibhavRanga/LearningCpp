#include<iostream>
using namespace std;

int decimalToBinaryDivisionMethod(int num)
{
    int n = 0;
    int result = 0;
    while (num > 0)
    {
        int bit = num % 2;
        result = (pow(10, n) * bit) + result;
        n++;
        num /= 2;
    }
    return result;
}

int decimalToBinaryBitwiseMethod(int num) {
    int n = 0;
    int result = 0;
    while (num > 0) {
        int bit = num & 1;
        result = result + (pow(10, n) * bit);
        num = num >> 1;
        n++;
    }
    return result;
}

int main()
{
    int number;
    cout << "Enter a number" << endl;
    cin >> number;
    int result = decimalToBinaryBitwiseMethod(number);
    cout << result << endl;
}
