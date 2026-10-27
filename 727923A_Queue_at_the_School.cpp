#include <bits/stdc++.h>
using namespace std;


void ex(string& s){
    s = regex_replace(s, regex("BG"), "GB");
}

int main() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while(t--){
        ex(s);
    }

    cout << s << '\n';

    return 0;
}
