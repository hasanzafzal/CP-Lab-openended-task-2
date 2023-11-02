#include <iostream>
using namespace std;

int main() {
    int i, j;
    cout << "\nEnter range: ";
    cin >> i >> j;

    cout << "\nPrime Numbers between range of " << i << " and " << j << " are : ";

    for (;i < j; i++)
    {
        if (i / i == 1 && i / 1 == i) {
            cout << i << ", ";
        }
    }

    cout << endl;

    return 0;
}