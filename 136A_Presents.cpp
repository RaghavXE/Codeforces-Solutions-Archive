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
        vector<int> ans(arr.size());
        for(int i = 0; i < arr.size(); i++){
            ans[arr[i]-1] = i+1;
            // ans.push_back(find(arr.begin(), arr.end(), arr[i]) - arr.begin());
            // cout << (find(arr.begin(), arr.end(), arr[i]) - arr.begin() + 1);
            
        }
        for(int i = 0; i < arr.size()-1; i++){
            cout << ans[i] << " ";
        }
        // cout << (find(arr.begin(), arr.end(), arr.size()) - arr.begin() + 1);
        cout << ans[ans.size()-1] << endl;

        
        
}