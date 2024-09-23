#include <iostream>
using namespace std;
int SumDigit(int num) {
    int s = 0;
    while (num > 0) {
        s += num % 10;
        num /= 10;
    }
    return s;
}
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int s = 0;
    for (int i = 1; i <= n; ++i) {
        int DigitSum = SumDigit(i);
        if (DigitSum >= a && DigitSum <= b) {
            s += i;
        }
    }
    cout << s << endl;
}
