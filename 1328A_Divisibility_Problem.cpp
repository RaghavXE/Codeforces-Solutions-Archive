#include <bits/stdc++.h>
using namespace std;

int main(){

        int t;
        cin >> t;
        vector<int> anss;
        while(t--){
            int a, b;
            cin >> a >> b;
            int ans = (a%b == 0)?0:b - (a % b);
            // anss.push_back(ans);
            cout << ans << endl;

        }
        // for(int x: anss){
        //     cout << x << endl;
        // }
}