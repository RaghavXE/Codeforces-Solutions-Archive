#include <bits/stdc++.h>
using namespace std;


string lowercase(string s){
    string a;
    for(char c: s){
        if(((int)c - (int)'A') < 26 && ((int)c - (int)'A') >= 0){
            a += (int)c - (int)'A' + (int)'a';
        } else a += c;
    }
    return a;
}
string uppercase(string s){
    string a;
    for(char c: s){
        if(((int)c - (int)'a') < 26 && ((int)c - (int)'a') >= 0){
            a += (int)c - (int)'a' + (int)'A';
        } else{
            a += c;
        }
    }
    return a;
}

int main(){
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    for(char c: s){
        if(((int)c - (int)'a') < 26 && ((int)c - (int)'a') >= 0){
            a++;
        }
        else if(((int)c - (int)'A') < 26 && ((int)c - (int)'A') >= 0){
            b++;
        }
    }
    string ans;
    if(a >= b){
        ans = lowercase(s);
    } else {
        ans = uppercase(s);
    }
    cout << ans << endl;
}