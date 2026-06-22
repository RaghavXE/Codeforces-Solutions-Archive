#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    if(m == 1 && n == 1){cout << 0 << endl; return 0;}
    cout << (n*m)/2 << endl;
}