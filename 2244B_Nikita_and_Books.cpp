#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        while(n--){
            int x;
            cin >> x;
            a.push_back(x);
        }
        n = a.size();

        bool neat = true;

        vector<long long> csum;

        long long b = 0;
        for(int i = 0; i < a.size(); i++){
            b += a[i];
            csum.push_back(b);
        }
        long long s = 0;
        for(int i = 1; i <= a.size(); i++){
            s += i;
            if(csum[i-1] < s){ neat = false; break;}
        }
        
        if(neat){ cout << "YES" << endl;}
        else cout << "NO" << endl;

    }
}