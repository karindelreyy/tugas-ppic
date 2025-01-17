#include <iostream>
#include <vector>
using namespace std;

int main() {
    int A[] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int n = sizeof(A) / sizeof(A[0]);
    int N;

    cout << "Masukkan bilangan integer = ";
    cin >> N;

    bool found = false;
    vector<int> lokasi;

    for (int i = 0; i < n; i++) {
        if (A[i] == N) {
            found = true;
            lokasi.push_back(i);
        }
    }

    if (found) {
        cout << "ADA" << endl;
        cout << "Lokasi bilangan yang sama: ";
        for (size_t i = 0; i < lokasi.size(); i++) {
            cout << lokasi[i];
            if (i != lokasi.size() - 1) cout << ", ";
        }
        cout << endl;
    } else {
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}

