#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 0, b = 0;
    vector<vector<int>> ar(5, vector<int>(5));
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int in;
            cin >> in;
            ar[i][j] = in;
            if(in == 1){a = i; b = j;}
        }
    }
    int d = abs(a - 2) + abs(b - 2);
    cout << d << endl;
}