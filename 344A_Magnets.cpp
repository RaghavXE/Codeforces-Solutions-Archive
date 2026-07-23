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
        int n = 1;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] != arr[i-1]) n++;
        }
        cout << n << endl;
}