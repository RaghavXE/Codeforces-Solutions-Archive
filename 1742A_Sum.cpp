#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        bool yes = false;
        if(a == b + c) yes = true;
        if(b == a + c) yes = true;
        if(c == b + a) yes = true;
        if(yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}