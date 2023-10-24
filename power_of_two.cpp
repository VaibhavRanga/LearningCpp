#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: " << endl;
    cin >> num;

    if (num < 1)
        return 0;
    while (num != 1)
    {
        if (num % 2 == 1)
        {
            cout << "No" << endl;
            return 0;
        }
        num /= 2;
    }
    cout << "Yes" << endl;
}
