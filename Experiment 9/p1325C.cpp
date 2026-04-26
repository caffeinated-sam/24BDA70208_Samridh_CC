#include <bits/stdc++.h>
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(i);
        adj[v].push_back(i);
    }
    int star_node = -1;
    for (int i = 1; i <= n; i++) {
        if (adj[i].size() >= 3) {
            star_node = i;
            break;
        }
    }
    vector<int> labels(n - 1, -1);
    int current_label = 0;
    if (star_node != -1) {
        for (int edge_idx : adj[star_node]) {
            if (current_label < 3) {
                labels[edge_idx] = current_label++;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        if (labels[i] == -1) {
            labels[i] = current_label++;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        cout << labels[i] << "\n";
    }
    return 0;
}