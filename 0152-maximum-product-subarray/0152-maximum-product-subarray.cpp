class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> maxdp(nums.size(),1);
        vector<int> mindp(nums.size(),1);
        maxdp[0]=nums[0];
        mindp[0]=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            maxdp[i]=max({nums[i]*mindp[i-1],nums[i],nums[i]*maxdp[i-1]});
            mindp[i]=min({nums[i]*mindp[i-1],nums[i],nums[i]*maxdp[i-1]});
            ans=max({ans,maxdp[i],mindp[i]});
        }
        return ans;
    }
};