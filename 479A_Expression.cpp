#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> op;
    op.push_back(a+b+c);
    op.push_back(a*b+c);
    op.push_back(a+b*c);
    op.push_back(a*(b+c));
    op.push_back((a+b)*c);
    op.push_back(a*b*c);

    cout << *max_element(op.begin(), op.end());
}
