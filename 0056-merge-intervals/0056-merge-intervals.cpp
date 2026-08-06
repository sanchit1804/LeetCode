class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> curr=nums[0];
        for(int i=0;i<nums.size();i++){
            if(curr[1]>=nums[i][0]){
                curr[1] = max(curr[1], nums[i][1]);
            }  
            else{
                res.push_back(curr);
                curr=nums[i];
            }
        }
        res.push_back(curr);
        return res; 
    }
};