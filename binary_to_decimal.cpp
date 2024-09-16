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

void binaryToDecimalUsingBitwise(int num) {
    int tempNum = num, decimal = 0, multiplier = 0;
    while (tempNum > 0) {
        int digit = tempNum % 10;
        tempNum /= 10;
        decimal += (digit << multiplier++);
    }
    cout << decimal << endl;
}

int main() {
    int num = 0;
    cout << "Enter a number" << endl;
    cin >> num;
    binaryToDecimalUsingBitwise(num);
}
