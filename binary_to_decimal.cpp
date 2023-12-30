#include<iostream>
using namespace std;

int binaryToDecimalDivisionMethod(int num) {
    int result = 0;
    int n = 0;
    while (num > 0) {
        int remainder = num % 10;
        result = result + pow(2, n) * remainder;
        num /= 10;
        n++;
    }
    return result;
}

int main() {
    int num = 0;
    cout << "Enter a number" << endl;
    cin >> num;
    int result = binaryToDecimalDivisionMethod(num);
    cout << result << endl;
}
