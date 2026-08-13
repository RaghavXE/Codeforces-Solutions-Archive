#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        long long ans = 0;
        vector<bool> vis(s.size(), false);
        for(int i = 0; i < n; i++){
            if(!vis[s[i] - (int)'a']){
                vis[s[i] - (int)'a'] = true;
                ans += n-i;
            }
        }
        cout << ans << endl;
    }
}
