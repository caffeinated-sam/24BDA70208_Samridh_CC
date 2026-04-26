#include <bits/stdc++.h>
using ull = unsigned long long;
using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        int a, b;
        cin>>a>>b;
        int n = min(a,b);
        if(n %2 == 0)cout<<"Malvika\n";
        else cout<<"Akshat\n";
    return 0;
}