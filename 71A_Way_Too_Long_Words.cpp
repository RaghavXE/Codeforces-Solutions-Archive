#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string v;
        if(s.length() > 10){
            v += s[0];
            int l = s.length()-2;
            v += to_string(l);
            v += s[s.length()-1];
            cout << v << endl;
        } else{
            cout << s << endl;
        }
    }
}