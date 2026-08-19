#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < a.size(); i++){
            int b;
            cin >> b;
            a[i] = b;
        }

        sort(a.begin(), a.end());
        bool can = true;

        for(int i = 1; i < n; i++){
            if(a[i]-a[i-1] > 1) {can = false; break;}
        }
        if(can) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}