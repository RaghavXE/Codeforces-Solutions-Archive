#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        vector<int> num;
        cin >> a;
        while(a--){
            int b;
            cin >> b;
            num.push_back(b);
        }
        a = num.size();
        int s = accumulate(num.begin(), num.end(), 0);
        int one, zero;
        one = count(num.begin(), num.end(), 1);
        zero = count(num.begin(), num.end(), 0);
        if(one == 0){ 
            cout << 0 << endl;
            continue;
        }
        // int ans = pow(2, zero)*one;
        long long ans = (1LL << zero) * one;
        cout << ans << endl;


    }


}


// 1 2 1 4 5 2 0 2 5 8 20 5 6 20 315 3 1 2 1 4 5 2 0 2 5 8 20 5 6 20 315 3 1 2 1 4 5 2 0 2 5 8 20 5 6 20 315 3 1 2 1 4 5 2 0 2 5 8 20 5