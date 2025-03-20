#include <iostream> 
using namespace std;

int main() {
    int i, j;
    // First part: from 0 to 4
    for (i = 4; i >= 0; i--) {
        cout << endl;
        for (j = i; j < 5; j++) {
            cout << j;
        }
    }
    // Second part: from 1 to 4
    for (i = 4; i >= 1; i--) {
        cout << endl;
        for (j = i; j < 5; j++) {
            cout << j;
        }
    }
    return 0;
}
