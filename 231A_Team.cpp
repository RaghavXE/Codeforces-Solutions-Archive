#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = 0;
    while(n--){
        int c = 0;
        int a;
        for(int i = 0; i < 3; i++){
            cin >> a;
            if(a == 1) c++;
        }
        if(c >= 2) s++;
    }
    cout << s << endl;
}