#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cz = count(s.begin(), s.end(), '0');
        int co = count(s.begin(), s.end(), '1');
        int a = 0;
        int sz = s.size();
        for(char c: s){
            // if(co < 0 || cz < 0) break;
            if(c == '0'){
                if(!co) break;
                co--;

            } else if(c == '1'){
                if(!cz) break;
                cz--;
    
            }
            a++;
        }
        cout << (sz-a) << endl;

    }
}