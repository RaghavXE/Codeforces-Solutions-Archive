#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int m = n;
        int s = 0;
        int td = 0;
        while(m != 0){
            s += m % 10;
            m /= 10;
            td++;
        }
        if(s < 10){
            cout << 0 << endl;
            continue;
        }
        else{
            int d = 0;
            int sm = 0;
            long long int o = n;
            vector<int> arr;
            while(o != 0){
                arr.push_back(o%10);
                o /= 10;
            }
            sort(arr.begin(), arr.end());
            vector<int> cont;
            int i = 0;
            while(i < arr.size()){
                sm += arr[i];
                if(sm < 10){d++; cont.push_back(arr[i]);}
                i++;
                if(sm >= 10) break;
            }
            i--;
            sm -= arr[i];
            long long temp = n;
            while(temp >= 10) temp /= 10;
            int f = temp;
            // int f = floor((double)n/pow(10,(td-1)));
            if(find(cont.begin(), cont.end(), f) != cont.end())
                cout << td-d << endl;
            else{
                if(sm < 9){
                    cout << td-d << endl;
                } else{
                    cout << td-d+1 << endl;
                }
            }
            continue;
        }

   }
}