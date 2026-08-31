#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a = 0;
    bool fl = false;
    for(int i = 0; i < n; i++){
        if(!(i&1)){
            cout << string(m, '#');
        } else if((i&1) && !fl){
            cout << string((m-1),'.') << '#';
            fl = !fl;
        }
        else if((i&1) && fl){
            cout << '#' << string((m-1),'.');
            fl = !fl;
        }
        cout << '\n';
    }
}
