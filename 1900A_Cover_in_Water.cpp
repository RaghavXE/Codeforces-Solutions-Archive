#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int hash = 0;
        int e1 = 0;
        int e2 = 0;
        int e3 = 0;
        if(s.length() == 0){cout << 0 << endl; continue;}
        if(s.length() == 1){
            if(s[0] == '#')
                {cout << 0 << endl; continue;}
            else
                {cout << 1 << endl; continue;}
        }
        hash = count(s.begin(), s.end(), '#');
        if(hash == s.length()){cout << 0 << endl; continue;}


        for(int i = 0; i+2 < s.size(); i++){
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                e3++;
            }
        }
        if(e3 >= 1){cout << "2" << endl; continue;}

        e1 = count(s.begin(), s.end(), '.');

        cout << e1 << endl;

    }
}