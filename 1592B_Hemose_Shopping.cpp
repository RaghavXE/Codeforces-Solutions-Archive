#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int in;
            cin >> in;
            v.push_back(in);
        }
        vector<int> vc = v;
        sort(vc.begin(), vc.end());

        int c = 0;
        bool checked = true;
        for(int i = n-x; i < x; i++){
            c++;
            if(vc[i] != v[i]){
                checked = false;
                break;
            }
        }

        if(c == 0 || checked){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << endl;
        }


        
    }

    return 0;
}