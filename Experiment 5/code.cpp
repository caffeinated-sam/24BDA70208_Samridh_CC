using ll = long long;
class Solution {
public:
    
    int nthMagicalNumber(int n, int a, int b) {
        int MOD = 1e9 + 7;
        ll l = 1;
        ll r = 1LL * min(a,b) * n;
        ll ans = 0;
        ll lc = lcm(a,b);
        while (l<=r){
            ll mid = l+(r-l)/2;
            ll count = mid/a + mid/b - mid/lc;

            if(count >= n){
                r = mid -1;
                ans = mid;
            }
            else{
                l = mid +1;
            }
        }

        return ans % MOD;
    }
};