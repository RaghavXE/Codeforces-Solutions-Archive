#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    deque<pair<int, int>> dq;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        pair<int, int> p = {i+1, a};
        dq.push_back(p);
    }

    while(dq.size() > 1){
        if(dq.front().second <= m){
            dq.pop_front();
        } else{
            int d = dq.front().second;
            int e = dq.front().first;
            d -= m;
            pair<int, int> g = {e, d};
            dq.pop_front();
            dq.push_back(g);
        }
    }
    cout << dq.front().first << endl;
    
}