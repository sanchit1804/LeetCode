class Solution {
public:
    int solve(vector<int>& nums,int start, int end){
        int first=nums[start];
        int second=max(nums[start+1],nums[start]);

        for(int i=start+2;i<=end;i++){
            int third=max(second,first+nums[i]);
            first=second;
            second=third;
        }
        return second;
    }
    int rob(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        if (nums.size()==2) return max(nums[0],nums[1]);
        return max(solve(nums,0,nums.size()-2),solve(nums,1,nums.size()-1));
    }
};