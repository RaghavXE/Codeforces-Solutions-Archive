#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int c = 0;
    vector<int> sc(n);
    for(int i = 0; i < n; i++){
        cin >> sc[i];
    }
    if(sc[k-1] == 0){
        int z = count(sc.begin(), sc.end(), 0);
        cout << n - z << endl;
        return 0;
    }
    for(int i = 0; i < n; i++){
        int b = sc[k-1];
        if(sc[i] >= b) c++;
    }
    cout << c << endl;
}