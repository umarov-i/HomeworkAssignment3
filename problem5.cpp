#include <iostream>
using namespace std;
bool isvalid(int n) {
    if (n % 3 == 0) {
        return false;
    }
    if (n % 10 == 3) {
        return false;
    }
    return true;
}
int findn(int n) {
    int cnt = 0;
    int num = 1;
    while (cnt < n) {
        if (isvalid(num)) {
            cnt++;
        }
        num++;
    }
    return num - 1;
}
int main() {
    int n;
    cin >> n;
    int r = findn(n);
    cout << r << endl;
    return 0;
}
