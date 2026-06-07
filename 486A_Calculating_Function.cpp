#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    // long long dp[n];
    // // dp[0] = 0;
    // // dp[1] = -1;
    // int s = 1;
    // int prev, cur;
    // prev = 0;
    // cur = -1;
    // for(int i = 2; i <= n; i++){
    //     s = ((i & 1) == 0)? 1 : -1;
    //     prev = cur;
    //     cur = prev + s*i;
    //     // dp[i] = dp[i-1] + s*i;
    // }
    // cout << cur;
    if((n & 1) == 0){
        cout << n/2 << endl;
    }
    else{
        cout << -(n+1)/2 << endl;
    }
}