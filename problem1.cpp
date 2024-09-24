#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s="";
    string probel ="";
    for(int i = n; i >= 0; i--){
        for(int j = 1; j <= i; j++ ){
            char a = j + 48;
            s += a;
            if(j == i){
                for(int k = 0; k < n-j; k++){
                    probel+=" ";
                }
            }
        }
        string reversestr = s;
        for(long unsigned int l = 0; l < s.length();l++){
            reversestr[l] = s[s.length()-1-l];
        }

        cout << s << probel << probel << reversestr<<"\n";
        probel = "";
        s = "";
    }


    return 0;
}
