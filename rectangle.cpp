#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "Enter the length of sides" << endl;
    cin >> a >> b >> c >> d;

    if ((a == b && c == d) || (a == c && b == d) || (a == d && b == c))
    {
        cout << "Rectangle" << endl;
    }
    else
    {
        cout << "Not a rectangle" << endl;
    }
}
