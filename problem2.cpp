#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        while(n > 0) {
            int a = n % 10;
            cout << a << " ";
            n /= 10;
        }
        cout << endl;
    }
    return 0;
}
