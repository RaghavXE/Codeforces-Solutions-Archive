#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> sv;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])) sv.push_back((s[i] - '0'));
    }
    sort(sv.begin(), sv.end());
    string t;
    for(int i = 0; i < sv.size(); i++){
        t += to_string(sv[i]);
        if(i != sv.size()-1)
        t += '+';
    }
    cout << t << endl;
}