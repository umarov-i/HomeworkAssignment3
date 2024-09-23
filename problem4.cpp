#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int f = 1;
    int ca = 2;
    while (ca <= n) {
        f++;
        ca += x;
    }
    cout << f << endl;
    return 0;
}
