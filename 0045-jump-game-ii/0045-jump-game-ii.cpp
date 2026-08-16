class Solution {
public:
    int jump(vector<int>& nums) {
        int far=0;
        int jump=0;
        int prevfar=0;
        for(int i=0;i<nums.size()-1;i++){
            far=max(far,nums[i]+i);
            if(i==prevfar){
                jump++;
                prevfar=far;
            }
        }
        return jump;
    }
};