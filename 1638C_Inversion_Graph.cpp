#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int in;
            cin >> in;
            v.push_back(in);
        }
        int m = 0;
        int c = 0;
        for(int i = 0; i < n; i++){
            m = max(m, v[i]);
            if(m == i+1) c++;
        }
        cout << c << '\n';
        
    }

    return 0;
}