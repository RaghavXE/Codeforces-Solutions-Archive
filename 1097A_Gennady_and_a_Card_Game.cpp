#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin >> t;
    string a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    if(a[0] == t[0] || 
        b[0] == t[0] || 
        c[0] == t[0] ||
        d[0] == t[0] ||
        e[0] == t[0] ||
        a[1] == t[1] || 
        b[1] == t[1] || 
        c[1] == t[1] ||
        d[1] == t[1] ||
        e[1] == t[1]) cout << "YES\n";
    else cout << "NO\n";
    
}