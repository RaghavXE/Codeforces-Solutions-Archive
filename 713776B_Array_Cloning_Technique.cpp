#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        if(n == 1){
            cout << 0 << '\n';
            continue;
        }
        if(mp.size() == 1){
            cout << 0 << '\n';
            continue;
        }
        if(n == 2 && a[0] != a[1]){
            cout << 2 << '\n';
            continue;
        }
        int mxfr = 0;
        int sm = 0;
        int diff = 0;
        int total = n;
        // for(int x: a){
        //     cout << x << " "; 
        // } cout << '\n';
        priority_queue<pair<int, int>> pq;
        for(auto &x: mp){
            pq.push({x.second, x.first});
        }

        sm = pq.top().first;
        // cout << "same : " << sm << '\n';
        diff = n - sm;
        int ans = 0;
        int k = 0;
        while(sm <= diff){
            diff -= sm;
            ans += sm;
            sm *= 2;
            k++;
        }
        // cout << "k-  " << k << '\n';
        if(diff > 0){
            ans += diff;
            k++;
        }
        // cout << "k-  " << k << '\n';
        ans += k;
        cout << ans << '\n';
    }


    return 0;
}