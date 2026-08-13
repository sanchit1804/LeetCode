class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        unordered_set<int> seen;
        for(auto [x,freq]:mp){
            if(seen.find(freq)!=seen.end()) return false;
            seen.insert(freq);
        }
        return true;
    }
};