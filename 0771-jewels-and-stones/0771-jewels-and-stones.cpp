class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> mp(jewels.begin(),jewels.end());
        int ans=0;
        for(int i=0;i<stones.size();i++){
            if(mp.find(stones[i])!=mp.end()) ans++;
        }
        return ans;
    }
};