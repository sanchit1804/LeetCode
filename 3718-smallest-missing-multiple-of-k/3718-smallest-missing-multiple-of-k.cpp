class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> mp(nums.begin(),nums.end());
        int n=1;
        while(k>0){
            int need=k*n;
            if(mp.find(need)==mp.end()) return need;
            else n++;
        }
        return 0;
    }
};