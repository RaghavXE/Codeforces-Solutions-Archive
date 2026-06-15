#include <bits/stdc++.h>
using namespace std;

int main(){

    // int t;
    // cin >> t;
    // while(t--){



    int n;
    cin >> n;
    bool done = false;
    if(n == 1) {
        cout << "NO" << endl;
        done = true;
    }
    int hun = 0;
    int two = 0;
    for(int i = 0; i < n; i++){
        int we;
        cin >> we;
        if(we == 100) hun++;
        if(we == 200) two++;
    }
    if(!done){
        if((hun & 1) != 0){
            cout << "NO" << endl;
            done = true;
        }
    }
    if(!done){
        if((two & 1) == 0){
            cout << "YES" << endl;
            done = true;
        }
    }
    if(!done){ 
        if((two & 1) != 0 && hun >= 2){
            cout << "YES" << endl;
            done = true;
        }
    }
    if(!done){
        if((two & 1) != 0 && hun < 2){
            cout << "NO" << endl;
            done = true;
        }
    }







    // }


// 100 200 100
// 200 200 200 100 100
// 200 200 200 200 200 200 200 100 100 100 100 100
// 200 200 100 100
// 100 100 200 100 100
// 200 200
// 100 100
// 100 100 200 200 200 200
// 100 100 100 100 200 200 200 200 200



// 200 100 100 100 
// 100 100 100
// 200 200 100
// 200 200 100 100 100 100


}
