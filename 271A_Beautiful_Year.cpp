#include <bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin >> y;
    int a = y;
    int dig = 0;
    while(a != 0){
        a /= 10;
        dig++;
    }

    int yr = y+1;
    int yh;
    bool distinct = false;
    while(true){
        
        yh = yr;
        unordered_set<int> seperate;
        while(yr != 0){
            seperate.insert(yr%10);
            yr /= 10;
    
        }
        if(seperate.size() == 4){
            distinct = true;
            break;
        }
        yr = yh+1;
    }
    cout << yh << endl;
   
}