#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int i = count(s.begin(), s.end(), '1');
        int j = count(s.begin(), s.end(), '0');
        if(i == j && (i & 1) != 0) cout << "DA" << endl;
        else if(j < i && (i & 1) != 0 && (j & 1) != 0)cout << "DA" << endl;
        else if(j > i && (i & 1) != 0)cout << "DA" << endl;
        else if(j < i && (i & 1) == 0 &&  (j & 1) != 0)cout << "DA" << endl;
        else cout << "NET" << endl;
    }
}