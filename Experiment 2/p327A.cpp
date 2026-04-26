#include <bits/stdc++.h>
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int> a(n);
    int ones = 0;
    for(int &i : a){cin>>i; if(i == 1)ones++;}
    int ans = 0;
    int curr = 0;
    for(int i = 0;i<n;i++){
        curr += (a[i] == 0)? (1):(-1);
        ans = max(ans,curr);
        curr = max(curr,0);
    }
    if(ones == n)cout<<n-1<<"\n";
    else cout<<ans+ones<<"\n";
    return 0;
}