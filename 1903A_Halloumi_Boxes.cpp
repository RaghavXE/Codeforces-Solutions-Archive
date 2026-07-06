#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> arrc(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            arrc[i] = arr[i];
        }
        sort(arr.begin(), arr.end());
        bool same = true;
        if(arr == arrc){cout << "YES" << endl; continue;}
        if(k >= 2){cout << "YES" << endl; continue;}
        if(k == 1){cout << "NO" << endl; continue;}
    }
}
