#include <iostream>
using namespace std;

int ma[3][5];

void init_ma() {
    for (int i=0; i!=3; i++) {
        for (int j=0; j!=5; j++) {
            ma[i][j] = 10*i+j;
        }
    }
}

int main() {
    init_ma();
    for (int i=0; i < 3; i++) {
        for (int j=0; j<5; j++) {
            cout << ma[i][j] << endl;
        }
    }
}
