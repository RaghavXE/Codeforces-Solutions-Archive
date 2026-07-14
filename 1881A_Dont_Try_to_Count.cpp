#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int op = 0;
        bool isSub = false;

        while(true){
            if(x.find(s) != string::npos){
                isSub = true;
                break;
            }
            x += x;
            op++;
            if(x.size() > 2*s.size() && (x.find(s) != string::npos) == false) break;
        }
        if(isSub){cout << op << endl; continue;}
        else{
            cout << -1 << endl;
        }

    }

}