#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
struct TreeNode{
    int data;
    vector<TreeNode*> child;

    TreeNode(int val) : data(val){}

    static void addEdge(TreeNode* node1, TreeNode* node2){
        if(!node1 || !node2) return;
        node1->child.push_back(node2);
        node2->child.push_back(node1);
    }
};

int ans = 0;
void func(int m, TreeNode* root, TreeNode* par, vector<int>& red, int cats){
    if(red[root->data] == 1){
        cats++;
    }
    else cats = 0;
    if(cats > m){
        return;
    }
    bool leaf = true;
    for(TreeNode* nx: root->child){
        if(nx == par) continue;
        leaf = false;
        func(m, nx, root, red, cats);
    }
    if(leaf) ans++;
}


int main() {
    long long n, m;
    cin >> n >> m;
    adj.assign(n+1, vector<int>());
    vector<int> red(n+1);
    for(int i = 1; i <= n; i++){
        cin >> red[i];
    }

    vector<TreeNode*> nodeMap(n+1, nullptr);
    for(int i = 1; i <= n; i++) nodeMap[i] = new TreeNode(i);
    for(int i = 0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        TreeNode::addEdge(nodeMap[a], nodeMap[b]);
        
    }
    func(m, nodeMap[1], nullptr, red, 0);
    cout << ans << '\n';
    return 0;
}