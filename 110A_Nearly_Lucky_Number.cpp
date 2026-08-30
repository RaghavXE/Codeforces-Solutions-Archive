#include <bits/stdc++.h>
using namespace std;

bool isLucky(uint64_t a){
    string s = to_string(a);
    uint64_t four = count(s.begin(), s.end(), '4');
    uint64_t seven = count(s.begin(), s.end(),'7');

    uint64_t cnt = four + seven;
    return cnt == s.size();
}

int main(){
    string s;
    cin >> s;
    uint64_t four = count(s.begin(), s.end(), '4');
    uint64_t seven = count(s.begin(), s.end(),'7');
    // uint64_t noD = floor(log10(n)+1);


    uint64_t cnt = four + seven;
    
    if(isLucky(cnt))
        cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}