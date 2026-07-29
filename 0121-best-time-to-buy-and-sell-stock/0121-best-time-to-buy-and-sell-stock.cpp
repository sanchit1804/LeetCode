class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int buyprice=nums[0];
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<buyprice) buyprice=nums[i];
            ans=max(nums[i]-buyprice,ans); 
        }
        return ans;
    }
};