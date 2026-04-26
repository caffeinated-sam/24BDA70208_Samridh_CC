class Solution {
    using ll = long long;
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        ll curr = 0;
        ll ans = 0;
        int l = 0;
        for(int r = 0;r<nums.size();r++){
            freq[nums[r]]++;
            curr += nums[r];
            while(freq[nums[r]] > 1 || (r - l + 1)>k){
                curr -= nums[l];
                freq[nums[l]]--;
                l++;
            }
            if((r - l + 1) == k)
            ans = max(curr,ans);
        }
        return ans;
    }
};