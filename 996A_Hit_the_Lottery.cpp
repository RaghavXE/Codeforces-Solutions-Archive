#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long a = 0;
    while(n != 0){
        if(n >= 100){
            a += (int)(n / 100);
            n = n - ((int)(n/100))*100;
        }
        else if(n >= 20){
            a += (int)(n / 20);
            n = n - ((int)(n/20))*20;
        }
        else if(n >= 10){
            a += (int)(n / 10);
            n = n - ((int)(n/10))*10;
        }
        else if(n >= 5){
            a += (int)(n / 5);
            n = n - ((int)(n/5))*5;
        }
        else if(n >= 1){
            a += (int)(n / 1);
            n = n - ((int)(n/1))*1;
        }
    }
    cout << a << endl;

}