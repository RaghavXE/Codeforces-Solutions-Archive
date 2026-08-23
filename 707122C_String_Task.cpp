#include <bits/stdc++.h>
using namespace std;

char to_lower(char c){
    if((int)c - (int)'a' >= 0 && (int)c - (int)'a' < 26) return c;
    return (char)((int)c - (int)'A' + (int)'a');
}

int main(){
    string s;
    cin >> s;
    string t;
    for(char c: s){
        if(c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u' ||c == 'Y' || c == 'y'){
            continue;
        } else{
            t += '.';
            t += to_lower(c);
        }
    }
    cout << t << endl;
}