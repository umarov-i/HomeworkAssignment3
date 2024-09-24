#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s="";
    string p ="";
    for(int i = n; i >= 0; i--){
        for(int j = 1; j <= i; j++ ){
            char a = j + 48;
            s += a;
            if(j == i){
                for(int k = 0; k < n-j; k++){
                    p+=" ";
                }
            }
        }
        string rr = s;
        for(long unsigned int l = 0; l < s.length();l++){
            rr[l] = s[s.length()-1-l];
        }

        cout << s << p << p << rr<<"\n";
        p = "";
        s = "";
    }


    return 0;
}
