#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int op = 0;
        int mnd = 100;
        if(k != 4){
            for(int i = 0; i < n; i++){
                int a;
                cin >> a;
                if(a % k == 0) mnd = 0;
                else mnd = min(abs((a%k)-k), mnd);
                op = mnd;
            }
            cout << op << endl;
        }
        else{
            int twos = 0;
            for(int i = 0; i < n; i++){
                int a;
                cin >> a;
                if(a % k == 0) mnd = 0;
                // else mnd = min(abs((a%k)-k), mnd);
                mnd = min(abs((a%4)-4), mnd);
                if(a % 4 == 0)twos += 2;
                else if(!(a&1)) twos++;
                
            }
            if(n == 1){
                cout << mnd << endl;
                continue;
            }
            if(twos == 0) op = 2;
            if(twos == 1) op = 1;
            if(twos >= 2) op = 0;

            op = min(mnd, op);

            cout << op << endl;
    
        }
        
    }
}