#include<iostream>
using namespace std;

int main() {
    int num, zeros = 0;
    cout << "Enter a number " << endl;
    cin >> num;

    while (num >= 5)
    {
        zeros += num / 5;
        num /= 5;
    }
    
    cout << zeros << endl;
}
