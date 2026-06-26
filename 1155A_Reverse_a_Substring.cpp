#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int r = -1;
    for(int i = 0; i < n-1; i++){
        if(s[i] > s[i+1]){
            r = i;
            break;
        }
    }
    if(r == -1) cout << "NO" << endl;
    else{cout << "YES" << endl; cout << r+1 << " " << r+2 << endl;}
}