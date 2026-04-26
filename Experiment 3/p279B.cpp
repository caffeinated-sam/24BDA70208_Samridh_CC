#include <bits/stdc++.h>
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, b,ans = 0;
    cin>>n>>b;
    ll sum = 0;
    vector<int> a(n);
    for(int &i : a)cin>>i;
    int l = 0, r = 0;
    for( ; r<n;r++){
        sum += a[r];
        while(sum > b){
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l +1);
    }
    cout<<ans<<"\n";
    return 0;
}