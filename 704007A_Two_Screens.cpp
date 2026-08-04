#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int c = 0, ans = 0;
        int i = 0;
        int m = min(a.size(), b.size());
        while(i < m && a[i] == b[i]){
            c++;
            i++;
        }
        if(c > 0)
            ans += 1;
        ans += c;
        ans += a.size()-c;
        ans += b.size()-c;
        cout << ans<< endl;
    }

}