#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, w, d;
        cin >> n >> w >> d;
        int ans;
        if(d >= w){
            int x = floor(d/w) + 1;
            ans = ceil((double)n/x);
        } else{
            ans = n;
        }
        cout << ans << endl;

   }
}