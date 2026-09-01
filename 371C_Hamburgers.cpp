#include <bits/stdc++.h>
using namespace std;


bool check(long long rb, long long rs, long long rc, long long nb, long long ns, long long nc, long long pb, long long ps, long long pc, long long r, long long m){
    long long mn = 0;
    long long canMake = min({((rb != 0)?(nb/rb):(LLONG_MAX)), ((rs != 0)?(ns/rs):(LLONG_MAX)), ((rc != 0)?(nc/rc):(LLONG_MAX))});
    long long tb = 0, ts = 0, tc = 0;
    if(canMake >= m) return true;
    // left amount
    tb = (rb != 0)? (nb - canMake*rb):0;
    ts = (rs != 0)? (ns - canMake*rs):0;
    tc = (rc != 0)? (nc - canMake*rc):0;

    long long nowReqB, nowReqS, nowReqC;
    nowReqB = (((rb != 0)?(m*rb - canMake*rb - tb):0)>=0)?((rb != 0)?(m*rb - canMake*rb - tb):0):0;
    nowReqS = (((rs != 0)?(m*rs - canMake*rs - ts):0)>=0)?((rs != 0)?(m*rs - canMake*rs - ts):0):0;
    nowReqC = (((rc != 0)?(m*rc - canMake*rc - tc):0)>=0)?((rc != 0)?(m*rc - canMake*rc - tc):0):0;

    mn = nowReqB*pb + nowReqS*ps + nowReqC*pc;

    
    return mn <= r;
}


int main(){
    string s;
    cin >> s;
    long long rb = 0, rs = 0, rc = 0;
    long long nb, ns, nc;
    long long pb, ps, pc;
    // max burgers he can cook.
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    long long r;
    cin >> r;

    // range is on what is asked.
    // range will be on no. of hamburgers
    // and we will calculate how much money he required to make m hamburgers.
    // minimum hamburgers: 1
    // maximum hamburgers: INT_MAX

    for(char c: s){
        if(c == 'B') rb++;
        if(c == 'S') rs++;
        if(c == 'C') rc++;
    }

    long long l = 1;
    long long h = 1e13;
    long long m = 0;

    long long maxHeCanMake = 0;

    

    while(l <= h){
        m = l + (h-l)/2;
        if(check(rb, rs, rc, nb, ns, nc, pb, ps, pc, r, m)){
            l = m+1;
            maxHeCanMake = max(maxHeCanMake, m);
        } else{
            h = m-1;
        }
    }
    cout << maxHeCanMake << '\n';
    
}