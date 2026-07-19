#include <bits/stdc++.h>

using namespace std;


bool isPrime(int g){
    if(g == 2 || g == 3 || g == 5) return true;
    long long s = int(sqrt(g));
    bool p = false;
    for(long long i = 2; i <= s; i++){
        if(g % i == 0){
            p = true;
            break;
        }
    }
    return !p;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(isPrime(n)){
            cout << n << endl; continue;
        }
        set<int> pf;
        // long long p = int((n/2));
        for(long long i = 2; i*i <= n; i++){
            if(n % i == 0){
                if(isPrime(i)) pf.insert(i);
                if(i != n/i){
                    if(isPrime(n/i)) pf.insert(n/i);
                }
            } 
        }    
        long long ans = 1;
        for(long long x: pf){
            ans *= x;
        }    
        cout << ans << endl;


    }    
}    
