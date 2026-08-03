#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;
    if(a == 0 || b == 0) cout << "No Multiples";
    else if(a % b == 0 || b % a == 0) cout << "Multiples";
    else cout << "No Multiples";
}