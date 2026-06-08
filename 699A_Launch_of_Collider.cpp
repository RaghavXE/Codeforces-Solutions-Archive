#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string rl;
    cin >> rl;
    int coor[n];
    for(int i = 0; i < n; i++){
        cin >> coor[i];
    }
    // BRUTE FORCE

    // bool coli = false;
    // for(int i = 0; i < n-1; i++){
    //     char a = rl[i];
    //     char b = rl[i+1];
    //     if(a == 'R' && b == 'L'){ coli = true; break;}
    // }
    // if(!coli){ cout << -1; return 0;}

    // int count = 0;
    // while(true){
    //     count++;
    //     for(int i = 0; i < n; i++){
    //         if(rl[i] == 'R') coor[i]++;
    //         if(rl[i] == 'L') coor[i]--;
    //     }
    //     set<int> s;
    //     for(int x: coor){
    //         s.insert(x);
    //     }
    //     if(s.size() < sizeof(coor)/sizeof(coor[0])) break;
    // }
    // cout << count;



    // OBSERVATION
    bool coli = false;
    for(int i = 0; i < n-1; i++){
        char a = rl[i];
        char b = rl[i+1];
        if(a == 'R' && b == 'L'){ coli = true; break;}
    }
    if(!coli){ cout << -1; return 0;}

    vector<int> di;
    for(int i = 0; i < n-1; i++){
        char a = rl[i];
        char b = rl[i+1];
        if(a == 'R' && b == 'L'){
            di.push_back(coor[i+1] - coor[i]);
        }
    }
    int mi = *min_element(di.begin(), di.end());
    // if(di.size() == 0) cout << -1;
    cout << mi/2;
}