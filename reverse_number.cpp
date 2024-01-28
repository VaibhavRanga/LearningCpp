#include<iostream>
using namespace std;

void reverse(int a) {
    int ans = 0;
    if (a < 0) {
        // a = a * -1;
        
        while (a) {
            int rem = a % 10;
            a /= 10;
            if (ans > INT_MAX / 10) {
                cout << "Integer overflow" << endl;
                return;
            }
            ans = ans * 10 + rem;
        }
        // ans = ans * -1;
    }
    cout << ans << endl;
}

int main() {
    reverse(-876);
}
