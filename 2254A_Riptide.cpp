#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());

        int m = v[1];
        cout << min((v[1] - v[0]), (v[2] - v[1])) << '\n';
    }

    return 0;
}