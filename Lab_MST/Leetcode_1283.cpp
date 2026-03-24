class Solution {
public:
    bool check(int mid, vector<int>& a,int t){
        int s=0;
        for(auto i:a){
            s += (i+mid-1)/mid;
        }
        return s<=t;
    }
    int smallestDivisor(vector<int>& nums, int t) {
        int l=1, ans=0;
        int r= *max_element(begin(nums), end(nums));
        while(l<=r){
            int mid= l+(r-l)/2;
            if(check(mid, nums, t)){
                ans =mid;
                r= mid-1;
            }
            else l= mid+1;
        }
        return ans;
    }
};
