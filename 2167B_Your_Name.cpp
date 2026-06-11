#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        multimap<int, int> mmp;
        bool has = true;
        for(int i = 0; i < s.length(); i++){
            if(s.length() != t.length()) has = false;
            if(count(s.begin(), s.end(), s[i]) != count(t.begin(), t.end(), s[i])){
                has = false;
            }
        }
        if(has) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}