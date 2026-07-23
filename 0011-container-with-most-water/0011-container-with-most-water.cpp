class Solution {
public:
    int maxArea(vector<int>& nums) {
        int right=nums.size()-1;
        int left =0;
        int total=0;
        int ans=0;
        while(left<right){
            int m=min(nums[left],nums[right]);
            total=m*(right-left);
            ans=max(total,ans);
            if(nums[left]<nums[right]) left++;
            else right--;
        }
        return ans;
    }
};