#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int c = 0;
    int y = x;
    if(x == 1){cout << 1 << endl; return 0;}
    if(x == 2){cout << 1 << endl; return 0;}
    if(x == 3){cout << 1 << endl; return 0;}
    if(x == 4){cout << 1 << endl; return 0;}
    if(x == 5){cout << 1 << endl; return 0;}
    if(x > 5){
        int d = x / 5;
        c = d;
        if(x % 5 != 0){
            c++;
        }
    }
    cout << c << endl;
}