class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int sum=0;
        int largest=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest) largest=nums[i];
        }
        while(k>0){
            sum+=largest;
            largest++;
            k--;
        }
        return sum;
    }
};