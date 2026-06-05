#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    // cin >> t;
    // while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> prices(n, 0);
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            prices.push_back(a);
        }
        sort(prices.begin(), prices.end());
        if(prices[0] >= 0){cout << 0 << endl;
        return 0;}
        vector<int> ans;
        int i = 0;
        while(prices[i] < 0){
            ans.push_back(prices[i]);
            i++;
        }

        int sum = 0;
        sort(ans.begin(), ans.end());
        if(ans.size() <= m)
        sum = accumulate(ans.begin(), ans.end(), 0);
        else{
            for(int i = 0; i < m; i++){
                sum += ans[i];
            }
        }
        cout << -sum << endl;
    // }
}