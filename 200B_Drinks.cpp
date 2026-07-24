#include <bits/stdc++.h>
using namespace std;

int main(){

        int a;
        cin >> a;
        vector<int> arr;
        for(int i = 0; i < a; i++){
            int b;
            cin >> b;
            arr.push_back(b);
        }
        double d = 0;
        for(double x: arr){
            d += x/100.0;
        }
        double f = arr.size();
        // double ans = d/f*100;
        cout << fixed << setprecision(10) << d/f*100 << endl;


        
}