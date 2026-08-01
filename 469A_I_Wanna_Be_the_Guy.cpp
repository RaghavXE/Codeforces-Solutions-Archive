#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, p, q;
    int s;
    cin >> n >> p;
    vector<int> a;
    vector<int> b;
    s = p;
    while(p--){
        int g;
        cin >> g;
        a.push_back(g);
    }
    p = s;
    cin >> q;
    s = q;
    while(q--){
        int g;
        cin >> g;
        b.push_back(g);
    }
    q = s;
    set<int> al;
    for(int x: a) al.insert(x);
    for(int x: b) al.insert(x);

    bool pass = true;
    for(int i = 1; i <= n; i++){
        if(find(al.begin(), al.end(), i) == al.end()){
            pass = false;
            break;
        }
    }
    if(pass) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
    
}