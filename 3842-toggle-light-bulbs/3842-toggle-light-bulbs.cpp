class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        set<int> mp;

        for(auto x:bulbs){
            if(mp.find(x)==mp.end()) mp.insert(x);
            else mp.erase(x);
        }
        return vector<int>(mp.begin(),mp.end());
    }
};