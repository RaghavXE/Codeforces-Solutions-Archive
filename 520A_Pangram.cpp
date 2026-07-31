#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n < 26){
        cout << "NO" << endl;
    }
    else{
        
        bool yes = true;

        int a = (int)'a';
        int aa = (int)'A';
        for(int i = 0; i < 26; i++){
            char c = (char)a;
            char d = (char)aa;
            bool found = (find(s.begin(), s.end(), c) != s.end()) || (find(s.begin(), s.end(), d) != s.end());
            if(found){
                a++;
                aa++;
                continue;
            }
            if(!found){
                yes = false;
                break;
            }
        }
        if(yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}