#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> an;
    while(n--){
        long long a;
        cin >> a;
        an.push_back(a);
    }
    n = an.size();
    long long m;
    cin >> m;
    vector<long long> am;
    while(m--){
        long long a;
        cin >> a;
        am.push_back(a);
    }
    m = am.size();


    vector<long long> p;
    p.push_back(an[0]);

    for(long long i = 1; i < n; i++){
        p.push_back(p[p.size()-1] + an[i]);
    }
// 2 9 12 16 25
    vector<long long> ss;
    for(long long x: am){

        auto j = lower_bound(p.begin(), p.end(), x);
        cout << (j-p.begin()+1) << endl;
    }


}