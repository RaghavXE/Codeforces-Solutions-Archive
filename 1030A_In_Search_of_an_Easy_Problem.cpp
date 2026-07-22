#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> s(n);
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        s[i] = in;
    }
    if(find(s.begin(), s.end(), 1) != s.end()) cout << "HARD" << endl;
    else cout << "EASY" << endl;
}