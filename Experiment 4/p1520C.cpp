#include <bits/stdc++.h>
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tn;cin>>tn;
    while(tn--){
        int n;cin>>n;
        if(n <2){
            cout<<1<<"\n";
            continue;
        }
        if(n == 2){
            cout<<-1<<"\n";
            continue;
        }
        vector<vector<int>> ans;
        vector<int> row;
        for(int i = 1 ; i<=n*n;i +=2){
            if(row.size() == n){
                ans.push_back(row);
                row = vector<int>();
            }
            row.push_back(i);
        }
        for(int i = 2 ; i<=n*n;i +=2){
            if(row.size() == n){
                ans.push_back(row);
                row = vector<int>();
            }
            row.push_back(i);
        }
        if(!row.empty())
        ans.push_back(row);
        for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
        }
    }
    return 0;
}