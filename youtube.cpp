

#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid input";
    }
    else if (units <= 100) {
        bill = units * 2;
        cout << "The bill = " << bill;
    }
    else if (units <= 200) {
        bill = (100 * 2) + (units - 100) * 3;
        cout << "The bill = " << bill;
    }
    else {
        bill = (100 * 2) + (100 * 3) + (units - 200) * 5;
        cout << "The bill = " << bill;
    }

    return 0;
}

