#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int i = 1;
    int tc = 0;
    for(; i <= w; i++){
        tc += i*k;
    }
    int c = tc - n;
    if(c > 0) cout << c << endl;
    else cout << 0 << endl;
}