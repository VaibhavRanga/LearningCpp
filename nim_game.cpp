#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of stones" << endl;
    cin >> n;
    if (n % 4 != 0)
        cout << "You will win" << endl;
    else
        cout << "You will lose" << endl;
    
}