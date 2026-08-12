#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int p = 0;
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                char c;
                cin >> c;
                if(c == 'X'){
                    if(i == 0 || j == 0 || i == 9 || j == 9) p += 1;
                    else if(i == 1 || j == 1 || i == 8 || j == 8) p += 2;
                    else if(i == 2 || j == 2 || i == 7 || j == 7) p += 3;
                    else if(i == 3 || j == 3 || i == 6 || j == 6) p += 4;
                    else if(i == 4 || j == 4 || i == 5 || j == 5) p += 5;
                }
            }
        }
        cout << p << endl;

    }
}