class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int DoubleDigit=0;
        int SingleDigit=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>9) DoubleDigit+=nums[i];
            else SingleDigit+=nums[i];
        }
        return SingleDigit!=DoubleDigit;
        }
};