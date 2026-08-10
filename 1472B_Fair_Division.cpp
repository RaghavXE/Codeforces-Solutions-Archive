#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        while(n--){
            int h;
            cin >> h;
            a.push_back(h);
        }
        n = a.size();

        if(n % 2 == 0){
            if(count(a.begin(), a.end(), 2) % 2 == 0){
                cout << "YES" << endl;
                continue;
            } else{
                cout << "NO" << endl;
                continue;
            }
        }
        else{
            if((count(a.begin(), a.end(), 2)> 0) && (count(a.begin(), a.end(), 2) % 2 != 0) && (count(a.begin(), a.end(), 1) > 0)){
                cout << "YES" << endl;
                continue;
            } else{
                cout << "NO" << endl;
                continue;
            }
        }
    }
}