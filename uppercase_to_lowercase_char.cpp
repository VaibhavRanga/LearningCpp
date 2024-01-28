#include<iostream>
using namespace std;

char convert(char name)
{
    name += 32;
    return name;
}

int main() {
    char name;
    cout << "Enter a character" << endl;
    cin >> name;
    cout << convert(name) << endl;
}
