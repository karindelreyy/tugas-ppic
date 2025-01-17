#include <iostream>
using namespace std;

int main() {
    int A[11];
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int n = sizeof(data)/sizeof(data[0]);
    cout << "\nA - Input dari kiri:" << endl;
    int idx_a = 0;
    for(int i = 0; i < 11; i++) {
        if(data[i] != 999) {
            A[idx_a] = data[i];
            cout << A[idx_a] << " ";
            idx_a++;
        }
    }
    
    cout << "\n\nB - Data yang lebih besar dari 9 sesuai urutan dokumen:" << endl;
    for(int i = 0; i < 11; i++) A[i] = 0;
    idx_a = 0;
    for(int i = 0; i < n && data[i] != 999; i++) {
        if(data[i] > 9) {
            A[idx_a] = data[i];
            cout << A[idx_a] << " ";
            idx_a++;
        }
    }
    
    cout << "\n\nC - Data yang lebih besar dari 9 disimpan berderetan:" << endl;
    idx_a = 0;
    for(int i = 0; i < n && data[i] != 999; i++) {
        if(data[i] > 9) {
            A[idx_a] = data[i];
            idx_a++;
        }
    }
    for(int i = 0; i < idx_a-1; i++) {
        for(int j = 0; j < idx_a-i-1; j++) {
            if(A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < idx_a; i++) {
        cout << A[i] << " ";
    }
    
    cout << "\n\nD - Data ganjil:" << endl;
    idx_a = 0;
    for(int i = 0; i < n && data[i] != 999; i++) {
        if(data[i] % 2 != 0) {
            A[idx_a] = data[i];
            cout << A[idx_a] << " ";
            idx_a++;
        }
    }
    
    cout << "\n\nE - Data ganjil diurutkan sesuai dokumen:" << endl;
    idx_a = 0;
    for(int i = 0; i < n && data[i] != 999; i++) {
        if(data[i] % 2 != 0) {
            A[idx_a] = data[i];
            cout << A[idx_a] << " ";
            idx_a++;
        }
    }
    
    return 0;
}
