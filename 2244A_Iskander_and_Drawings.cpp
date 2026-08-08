#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        string s;
        cin >> a >> s;
        string lo;
        int b = 0;
        int d = 0;
        for(char c: s){
            // string l;
            if(c == '#'){
                b++;
                // l += '#';
            } else if(c == '*'){
                b = 0;
                // l = "";
            }
            d = max(d, b);
        }
        if((d&1) == 0){
            cout << d/2 << endl;
        } else{
            cout << (((int)(d/2))+1) << endl;
        }

    }
}