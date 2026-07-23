class Solution {
public:
    bool canJump(vector<int>& nums) {
        int far=0;
        
        for(int i=0;i<nums.size();i++){
            if(i>far) return false;
            if(i+nums[i]>=nums.size()-1) return true;
            far=max(far,i+nums[i]);
        }
        return true;
    }
};