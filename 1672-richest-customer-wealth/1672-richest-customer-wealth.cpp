class Solution {
public:
    int maximumWealth(vector<vector<int>>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int highest=0;
            for(int j=0;j<nums[0].size();j++){
                highest+=nums[i][j];
            }
            ans=max(ans,highest);
        }
        return ans;
    }
};