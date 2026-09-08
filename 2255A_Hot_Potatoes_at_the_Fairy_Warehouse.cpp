#include <bits/stdc++.h>

using namespace std;

string run(string s){
    string t = s;
    char l = s.back();
    int i = s.size()-2;
    int j = s.size()-1;
    
    while(i >= 0){
        if(s[i] == '1'&& s[j] == '0'){
            t[j] = '1';
            t[i] = '0';
        }
        i--;
        j--;
    }
    if(s[0] == '0' && l == '1'){ t[0] = '1'; t[t.size()-1] = '0';}
    return t;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int r = 0, b = 0;
        int zero = count(s.begin(), s.end(), '0');
        int one = count(s.begin(), s.end(), '1');

        if(zero == 0){
            cout << n << " " << n << '\n';
            continue;
        } else if(one == 0){
            cout << 0 << " " << 0 << '\n';
            continue;
        }
        string t = run(s);

        for(int i = 0; i < t.size(); i++){
            if(i % 2 == 0 && t[i] == '1'){
                b++; 
            }
            else if(t[i] == '1' && i % 2 != 0){
                r++;
            }

        }

        cout << r << " " << b << '\n';

    }
}