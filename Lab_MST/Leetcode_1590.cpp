class Solution {
public:
    int minSubarray(vector<int>& a, int p) {
        int n=a.size(),target=0,sum=0,need=0, ans=n;
        long long s=0;
        for(int i:a) s+=i;
        target=s%p;
        if(target==0) return 0;
        unordered_map<int, int> m;
        m[0]=-1;
        for(int i=0;i<n;i++){
            sum+=a[i];
            sum%=p;
            need= (sum-target+p)%p;
            if(m.count(need)){
                ans=min(ans, i-m[need]);
            }
            m[sum]=i;
        }
        if(ans==n) return -1;
        else return ans;
    }
};