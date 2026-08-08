class Solution {
public:
    bool wordBreak(string s, vector<string>& nums) {
        unordered_set<string> mp(nums.begin(),nums.end());
        
        vector<bool> dp(s.size()+1,false);
        dp[0]=true;
        for(int i=1;i<=s.size();i++){
            for(int j=0;j<i;j++){
                string need=s.substr(j,i-j);
                if(dp[j] && mp.find(need)!=mp.end()){
                dp[i]=true;
                break;
                }
            }    
        }
        return dp[s.size()];
    }
};