#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int m = n;
    int ans = 0;
    int i = 0;
    for(; i < k; i++){
        int l = m % 10;
        if(l != 0){
            m = m-1;
        } else if(l == 0){
            m = m/10;
        }
    }
    cout << m << endl;
}