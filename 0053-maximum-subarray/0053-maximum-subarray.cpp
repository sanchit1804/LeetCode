class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        if(nums.size() == 1) return nums[0];
        int ans=nums[0];
        dp[0]=nums[0];
        dp[1]=max(nums[1],nums[1]+nums[0]);
        ans=max(dp[1],dp[0]);
        for(int i=2;i<nums.size();i++){
            dp[i]=max(nums[i],dp[i-1]+nums[i]);
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};