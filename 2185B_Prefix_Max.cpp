#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a;
        int l;
        cin >> a;
        l = a;
        int m = 0;
        while(a--){
            int b;
            cin >> b;
            m = max(b, m);
        }
        cout << (m*l) << '\n';
    }
}