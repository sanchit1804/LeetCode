class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total=0;
        int n=nums.size()+1;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        return n*(n-1)/2-total;
    }
};