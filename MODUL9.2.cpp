#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char A[] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    int n = sizeof(A) / sizeof(A[0]);
    char C;

    cout << "Masukkan karakter = ";
    cin >> C;

    bool found = false;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] == C) {
            found = true;
            count++;
        }
    }

    if (found) {
        cout << "ADA" << endl;
        cout << count << endl;
    } else {
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}

