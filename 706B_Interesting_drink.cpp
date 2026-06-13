#include <bits/stdc++.h>
using namespace std;

int main(){

    // n
    // x array prices
    // q days
    // m coins available daily array

    int shops;
    cin >> shops;
    vector<int> prices(shops);
    for(int i = 0; i < shops; i++){
        cin >> prices[i];
    }
    int days;
    cin >> days;
    vector<int> coins(days);
    for(int i = 0; i < days; i++){
        cin >> coins[i];
    }
    sort(prices.begin(), prices.end());
    int l = 0;
    int r = shops;
    int h = 0;
    int co = 0;
    vector<int> big(days);
    for(int i = 0; i < days; i++){
        int tar = coins[h];
        
        
        auto s = upper_bound(prices.begin(), prices.end(), tar);

        big[h] = s - prices.begin();
        h++;
    }
    for(int x: big) cout << x << endl;


}