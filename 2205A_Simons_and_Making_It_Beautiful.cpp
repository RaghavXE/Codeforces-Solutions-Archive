#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        vector<int> arr;
        for(int i = 0; i < a; i++){
            int b;
            cin >> b;
            arr.push_back(b);
        }
        int m = *max_element(arr.begin(), arr.end());
        int in = find(arr.begin(), arr.end(), m) - arr.begin();
        arr[in] = arr[0];
        arr[0] = m;

        for(int i = 0; i < a-1; i++){
            cout << arr[i] << " ";
        }
        cout << arr[a-1];
        cout << endl;
        // cout << m << endl;
        // cout << in << endl;

    }
}