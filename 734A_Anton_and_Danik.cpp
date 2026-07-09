#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = count(s.begin(), s.end(),'A');
    int d = count(s.begin(), s.end(),'D');
    if(a > d) cout << "Anton" << endl;
    if(a < d) cout << "Danik" << endl;
    if(a == d) cout << "Friendship" << endl;
}