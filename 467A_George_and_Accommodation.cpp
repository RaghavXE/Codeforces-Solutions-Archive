#include <bits/stdc++.h>
using namespace std;

int main(){

        int a;
        cin >> a;
        int ans = 0;
        for(int i = 0; i < a; i++){
            int b, c;
            cin >> b >> c;
            if(c-b >= 2) ans++;
        }
        
        cout << ans << endl;


        
}