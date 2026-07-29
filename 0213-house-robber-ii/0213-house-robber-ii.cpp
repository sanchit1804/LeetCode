class Solution {
public:
    int solve(vector<int>& nums,int left,int right){
        if(left==right) return nums[left];
        vector<int> dp(right-left+1,0);
        dp[0]=nums[left];
        dp[1]=max(nums[left+1],nums[left]);

        for(int i=2;i<right-left+1;i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i+left]);
        }
        return dp[right-left];
    }

    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        int odd=solve(nums,0,nums.size()-2);
        int even=solve(nums,1,nums.size()-1);
        return max(even,odd);
    }
};