#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    vector<int> h;
    while(t--){
        int a;
        cin >> a;
        h.push_back(a);
    }
    int r = 0;
    auto p = max_element(h.begin(), h.end());
    int mi = p - h.begin();
    int m = *p;

    int li = h.size() - 1 - (min_element(h.rbegin(), h.rend()) - h.rbegin());
    int l = h[li];

    if(mi < li){
        r += mi;
        r += h.size()-li-1;
        cout << r << "\n";
    }
    else{
        r += mi;
        r += h.size()-li-2;
        cout << r << "\n";
    }
}

