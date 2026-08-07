class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        int left=1;
        for(int i=0;i<nums.size();i++){
            dp[i]*=left;
            left*=nums[i];
        }
        
        int right=1;
        for(int i=nums.size()-1;i>=0;i--){
            dp[i]*=right;
            right*=nums[i];
        }
        return dp;
    }
};