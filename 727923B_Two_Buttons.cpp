#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long c = 0;
    while (m > n) {
        if (m % 2 == 0) m /= 2;
        else m += 1;
        c++;
    }
    cout << c + (n - m) << '\n';
    return 0;
}