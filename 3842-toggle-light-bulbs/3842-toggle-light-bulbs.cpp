class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int> mp;
        for(int i=0;i<bulbs.size();i++){
            mp[bulbs[i]]++;
        }
        vector<int> ans;
        for(auto x:mp){
            if(x.second%2==1) ans.push_back(x.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};