#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n = 0;
        vector<int> a;
        cin >> n;
        while(n--){
            int b;
            cin >> b;
            a.push_back(b);
        }
        int kind = 0;
        set<int> s(a.begin(), a.end());
        kind = s.size();

        if(kind > 2){ cout << "No" << endl; continue;}

        if(kind == 1){cout << "Yes" << endl; continue;}

        if(kind == 2){
            auto it = s.begin();
            int p = *it;
            it++;
            int q = *it;
            int pc = count(a.begin(), a.end(), p);
            int qc = count(a.begin(), a.end(), q);
            if(a.size()% 2 == 0){
                if(pc == qc){ cout << "Yes" << endl; continue;}
                else{cout << "No" << endl; continue;}
            } else{
                if(pc == qc+1 || qc == pc+1){ cout << "Yes" << endl; continue;}
                else{cout << "No" << endl; continue;}
            }
        }

    }


}

