#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n < 3){
            cout << 0 << '\n';
            continue;
        }
        cout << ((int)((n-1)/2)) << '\n';
    }
}