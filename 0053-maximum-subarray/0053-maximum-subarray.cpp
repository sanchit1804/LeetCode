class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int first=nums[0];
        for(int i=1;i<nums.size();i++){
            first=max(nums[i],first+nums[i]);
            ans=max(first,ans);
        }
        return ans;
    }
};