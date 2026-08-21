#include <bits/stdc++.h>
using namespace std;

bool check(int n, int k, int t){
    long long a = 0;
    int i = 0;
    while(pow(k, i) <= t){
        a += (int)(t/(pow(k, i)));
        i++;
        if(a >= n) break;
    }
    return a >= n;

}

int main(){
    int n, k;
    cin >> n >> k;

    int l = 1;
    int h = n;
    int m;
    int ans = INT_MAX;
    while(l <= h){
        m = l + (h-l)/2;
        if(check(n, k, m)){
            h = m-1;
            ans = min(ans, m);
        } else{
            l = m+1;
        }
    }
    cout << ans << endl;
}