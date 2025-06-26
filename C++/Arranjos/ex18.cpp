#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int matriz[3][10]; // [i][j]

    // LETRA A
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 10; j++) {
            matriz[i][j] = j;
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 10; j++) {
            cout << setw(4) << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}