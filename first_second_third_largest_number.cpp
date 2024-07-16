#include<iostream>
using namespace std;

int main() {

    int array[10] = {232, 89, 54, 783, 90, 112, 445, 324, 76, 240};

    int largest = INT_MIN, secondLargest = INT_MIN, thirdLargest = INT_MIN;
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
        if (array[i] > largest) {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = array[i];
        } else if (array[i] > secondLargest) {
            thirdLargest = secondLargest;
            secondLargest = array[i];
        } else if (array[i] > thirdLargest) {
            thirdLargest = array[i];
        }
    }
    cout << "Third largest: " << thirdLargest << endl;
    cout << "Second largest: " << secondLargest<< endl;
    cout << "Largest: " << largest << endl;
}
