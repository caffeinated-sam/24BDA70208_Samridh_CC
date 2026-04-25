class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n, 1); //tlls thee subsequence we get at that element4
        for (int i=0;i < n; i++) {
            for (int j=0; j < i; j++) {
                if (arr[i]>arr[j]) {
                    dp[i] =max(dp[i], dp[j] + 1);
                }
            }
        }

        int  ans= *max_element(dp.begin(), dp.end());
        return ans;      
    }
};