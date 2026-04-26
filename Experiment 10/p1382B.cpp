#include <bits/stdc++.h>
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tn;cin>>tn;
    while(tn--){
        int n, m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(m);
        unordered_set<int>s;
        for(int &i:a){cin>>i;s.insert(i);}
        for(int &i:b)cin>>i;
        bool f = false;
        int ans = 0;
        for(int i :b){
            if(s.count(i)){
                f = true;
                ans = i;
                break;
            }
        }
        if(f)cout<<"YES\n"<<1<<" "<<ans;
        else cout<<"NO";
        cout<<"\n";
    }
    return 0;
}