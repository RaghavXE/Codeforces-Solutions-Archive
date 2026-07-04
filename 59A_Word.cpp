#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int up = 0;
    int low = 0;
    for(char c: s){
        if(c >= 'A' && c <= 'Z') up++;
        if(c >= 'a' && c <= 'z') low++;
    }
    if(up > low) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;
}