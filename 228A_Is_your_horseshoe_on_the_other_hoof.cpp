#include <bits/stdc++.h>
using namespace std;

int main(){

        set<int> a;
        int ans = 0;
        for(int i = 0; i < 4; i++){
            int b;
            cin >> b;
            a.insert(b);
        }
        int g = (4 - a.size());
        cout << g << endl;
}