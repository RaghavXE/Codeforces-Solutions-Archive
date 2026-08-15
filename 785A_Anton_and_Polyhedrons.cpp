#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long faces = 0;
    while(t--){
        string a;
        cin >> a;
        if(a == "Icosahedron") faces += 20;
        else if(a == "Octahedron") faces += 8;
        else if(a == "Cube") faces += 6;
        else if(a == "Dodecahedron") faces += 12;
        else if(a == "Tetrahedron") faces += 4;
    }
    cout << faces << endl;
}