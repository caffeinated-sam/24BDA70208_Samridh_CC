#include <bits/stdc++.h>
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a)cin>>i;
    int ans = 0;
    for(int i = 1;i<n-1;i++){
        if(a[i-1] == 1 && a[i+1] == 1 && a[i] == 0){
            ans++;
            a[i+1] = 0;
        }
    }
    cout<<ans<<"\n";
    return 0;
}