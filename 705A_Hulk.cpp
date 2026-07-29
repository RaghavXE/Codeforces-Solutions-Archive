#include <bits/stdc++.h>
using namespace std;

int main(){

        int a;
        cin >> a;
        int c = 0;
        while(c < a){
            cout << "I hate ";
            c++;
            if(a == c) break;
            cout << "that ";
            cout << "I love ";
            c++;
            if(a == c) break;
            cout << "that ";
        }
        cout << "it" << endl;
}