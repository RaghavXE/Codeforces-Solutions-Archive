#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        multimap<int, char> mmp;

        char clr = 'r';
        for(int i = 0; i < n; i++){
            mmp.insert({arr[i], clr});
            clr = (clr == 'r')?'b':'r';
        }
        bool ans = true;
        char a = '\0';
        char b = '\0';
        for(auto it = mmp.begin(); it != mmp.end(); ++it){
            a = b;
            b = it->second;
            if(a == b){
                ans = false;
                break;
            }
        }

        cout << ((ans)?"YES":"NO") << endl;
    }
}