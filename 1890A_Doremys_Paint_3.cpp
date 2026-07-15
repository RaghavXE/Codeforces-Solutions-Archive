#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr;
        int m = n;
        while(n--){
            int a;
            cin >> a;
            arr.push_back(a);
        }
        n = m;
        int type = 0;
        int cnta, cntb;
        set<int> el;
        int i = 0;
        while(n--){
            el.insert(arr[i++]);
        }
        type = el.size();
        if(type > 2){
            cout << "No" << endl;
            continue;
        }
        if(type == 1){
            cout << "Yes" << endl;
            continue;
        }
        int a,b; 
        for(auto it : el){
            b = it;
        }
        el.erase(b);
        for(auto it : el){
            a = it;
        }
        cnta = count(arr.begin(), arr.end(), a);
        cntb = count(arr.begin(), arr.end(), b);

        if(type < 3 && abs(cnta - cntb)<=1) cout << "Yes" << endl;
        else cout << "No" << endl;


        

    }

}