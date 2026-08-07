#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        string b = a;
        int one = count(a.begin(), a.end(), '1');
        int zero = count(a.begin(), a.end(), '0');
        int o = one, z = zero;
        int f = a.size();
        for(char c: a){
            if(o == 0 && c == '0' || z == 0 && c == '1') break;
            if(c == '1') {z--; f--;}
            else {o--; f--;}
        }
        cout << f << endl; 
    }

    
    
}
