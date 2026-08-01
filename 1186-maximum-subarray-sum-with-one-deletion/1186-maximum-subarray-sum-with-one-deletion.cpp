class Solution {
public:

    int maximumSum(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> keep(nums.size()+1,0);
        vector<int> del(nums.size()+1,0);
        keep[0]=nums[0];
        del[0]=0;
        int ans=INT_MIN;
        for(int i=1;i<nums.size();i++){
            keep[i]=max(nums[i],keep[i-1]+nums[i]);
            del[i]=max(keep[i-1],del[i-1]+nums[i]);
            ans=max(ans,max(del[i],keep[i]));
        }
        return ans;
    }
};