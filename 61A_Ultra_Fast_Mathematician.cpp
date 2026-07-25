#include <bits/stdc++.h>
using namespace std;

int main(){

        string a, b;
        cin >> a >> b;
        string c;
        for(int i = 0 ; i < a.size(); i++){
            c += to_string(((int)a[i] - (int)'0') ^ ((int)b[i] - (int)'0'));
        }
        cout << c << endl;       
}