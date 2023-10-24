#include <iostream>
using namespace std;

int main()
{
    int number = 91;
    while (number > 9)
    {
        int answer = 0, remainder;

        while (number > 0)
        {
            remainder = number % 10;
            answer += remainder;
            number /= 10;
        }
        number = answer;
    }
    cout << number << endl;
}
