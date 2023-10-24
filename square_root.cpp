#include<iostream>
using namespace std;

int main() {
    int testNum, squareRoot, i = 1;

    cout << "Enter a positive number" << endl;
    cin >> testNum;
    
    while ((i * i) <= testNum)
    {
        squareRoot = i;
        i++;
    }
    cout << squareRoot << endl;
}