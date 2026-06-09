#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;
        if(n == 1){ cout << "NO" << endl; continue;}
        // if(k == 1) {cout << "NO" << endl; continue;}
        if(x != 1){
            cout << "YES" << endl;
            cout << n << endl;
            for(int i = 0; i < n-1; i++) cout << 1 << " ";
            cout << 1 << endl;
            continue;
            
        }
        else{
            if(k == 1)  {cout << "NO" << endl; continue;}

            else if((n&1)==0) {
                cout << "YES" << endl;
            cout << n/2 << endl;
            for(int i = 0; i < n/2; i++) cout << 2 << " " << endl;
            // cout << 1 << endl;
            continue;
            }

            else if(k >= 3){
                 cout << "YES" << endl;
            cout << int(n/2) << endl;
            for(int i = 0; i < n/2-1; i++) cout << 2 << " ";
            cout << 3 << endl;
            continue;
            }  
            else{
                cout << "NO" << endl;
            }   
        }


    }
}