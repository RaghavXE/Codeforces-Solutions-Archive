#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int c = 0;
    while(true){
        if(a > b){
            break;
        }
        a *= 3;
        b *= 2;
        c++;
    }
    cout << c << endl;
}