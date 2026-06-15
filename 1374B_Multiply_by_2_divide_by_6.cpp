#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n == 1){cout << 0 << endl; continue;}
        if(n % 3 != 0){cout << -1 << endl; continue;}
        // break the num into no of 3 and 2.
        // if no of 3 < 2 return -1
        // if any other no is there other than 3 or 2, return -1
        // no of 2's are required that is count of 3 - count of 2
        // no of 6 are required = no of 3 present
        // return the sum of 2 required and 3 required.

        long long m = n;
        int pres3 = 0;
        int pres2 = 0;
        while(m % 3 == 0){
            pres3++;
            m /= 3;
        }
        while(m % 2 == 0){
            pres2++;
            m /= 2;
        }
        if(pres2 > pres3){cout << -1 << endl; continue;}
        if(m != 1 && (m & 1) != 0){cout << -1 << endl; continue;}
        
        int req2 = 0;
        req2 = pres3 - pres2;
        int req6 = 0;
        req6 = pres3;

        cout << req2 + req6 << endl;



    }
}