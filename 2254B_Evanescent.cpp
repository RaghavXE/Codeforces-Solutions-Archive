#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int groups = 1;
        for (int i = 1; i < n; i++)
            if (s[i] != s[i - 1])
                groups++;

        int ans = INT_MAX;

        for (int i = 1; i <= n - 2; i++) {
            int L = (s[i - 1] != s[i]);
            int R = (s[i] != s[i + 1]);
            int N = (s[i - 1] != s[i + 1]);

            ans = min(ans, groups - L - R + N);
        }

        cout << ans << '\n';
    }

    return 0;
}