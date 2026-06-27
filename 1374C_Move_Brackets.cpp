#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

        int ti;
        string br;
        cin >> ti;
        // if((ti&1)!=0)
        cin >> br;
        int a = 0;
        bool z = false;
        int co = 0;
        for(char c: br){

            if(c == '('){
                a++;
            }
            else if(c == ')'){
                if(a == 0){ co++; a = 0; continue;}
                a--;
            }
        }
        cout << co << endl;

    }

}