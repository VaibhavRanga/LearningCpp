#include<iostream>
using namespace std;



//solid rectangle


/* int main() {

    int rows = 5;
    int cols = 7;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << "* ";
        }
        cout << endl;
    }
} */






//hollow rectangle

/* int main() {
    int rows = 5;
    int cols = 7;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (row == 0 || row == rows - 1) {
                cout << "* ";
            } else {
                if (col == 0 || col == cols - 1) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
} */





//solid half pyramid

/* int main() {
    int rows = 5;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
} */






//solid inverted half pyramid

/* int main() {
    int rows = 5;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < rows - row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
} */







//numeric half pyramid

/* int main() {
    int rows = 5;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < row + 1; col++) {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
} */






//inverted numeric half pyramid

/* int main() {
    int rows = 5;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < rows - row; col++) {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
} */






//hollow inverted half pyramid

/* int main() {
    int n = 40;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n - row; col++) {
            if (row == 0 || col == 0 || col == n - row - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
} */







//solid full pyramid

/*
int main() {
    
    int n = 6;

    for (int row = 0; row < n; row++) {
        for (int spaces = 0; spaces < n -row - 1; spaces++) {
            cout << "  ";
        }
        for (int stars = 0; stars < 2 * row + 1; stars++) {
            cout << "* ";
        }
        cout << endl;
    }
}
*/







//hollow full pyramid
/*
int main() {

    int n = 6;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < 2 * n - 1; col++) {
            if (row == n - 1 || col == n - row - 1 || col == n + row - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
*/






//inverted full pyramid

int main() {
    int n = 4;

    for (int row = 0; row < n; row++) {
        for (int spaces = 0; spaces < row; spaces++) {
            cout << "  ";
        }
        for (int stars = 0; stars < n - row; stars++) {
            cout << "* ";
        }
        cout << endl;
    }
}