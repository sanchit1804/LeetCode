class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& nums) {
        vector<vector<int>> ans;
        for(int i=0;i<nums[0].size();i++){
            vector<int> v;
            for(int j=0;j<nums.size();j++){
                v.push_back(nums[j][i]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};