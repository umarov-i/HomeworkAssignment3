#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        for (int j = i; j < num; j++) {
            cout << " ";
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
