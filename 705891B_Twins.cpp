#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> coins;
    while(t--){
        int a;
        cin >> a;
        coins.push_back(a);
    }
    t = coins.size();

    int s1 = 0;
    int c1 = 0;
    int s2 = 0;
    int c2 = 0;

    int total = accumulate(coins.begin(), coins.end(), 0);
    sort(coins.begin(), coins.end());
    reverse(coins.begin(), coins.end());

    for(int x: coins){
        if(s1 > total / 2) break;
        s1 += x;
        c1++;

    } 
    cout << c1 << endl; 

    

    // 10 2 5 6 4 7 8 2 3 6 5
    // 2 2 3 4 5 5 

    
}