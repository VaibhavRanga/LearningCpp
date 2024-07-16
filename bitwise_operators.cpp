#include<iostream>
using namespace std;

int main() {

    //& operator

    int a = 5;
    int b = 2;

    int result = a & b;
    cout << result << endl;

    //or operator

    result = a | b;
    cout << result << endl;

    //not operator

    result = ~ a;
    cout << result << endl;

    //xor operator

    result = a ^ b;
    cout << result << endl;

    //left shift -> num * 2 ^ n

    result = -100 << 1;
    cout << result << endl;

    //right shift -> num / 2 ^ n

    result = 100 << 1;
    cout << result << endl;
}
