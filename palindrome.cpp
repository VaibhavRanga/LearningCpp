#include<iostream>
using namespace std;

int main()
{
    int num, revNum = 0, temp, rem;

    cout << "Enter a number" << endl;
    cin >> num;

    temp = num;
    while (num)
    {
        rem = num % 10;
        revNum = revNum * 10 + rem;
        num /= 10;
    }
    if (temp == revNum)
    cout << "Palindrome" << endl;
    else
    cout << "Not a palindrome" << endl;
}
