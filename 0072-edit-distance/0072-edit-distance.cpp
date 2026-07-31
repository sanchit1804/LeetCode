class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size() + 1, vector<int>(word2.size() + 1, 0));
        int n = word1.size();
        int m = word2.size();


        for(int i = 1; i <= n; i++) {
            dp[i][0] = i;
        }
        for(int j = 1; j <= m; j++) {
            dp[0][j] = j;
        }
        for(int i=1;i<=word1.size();i++){
            for(int j=1;j<=word2.size();j++){
                if(word1[i-1]==word2[j-1]) dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=1+min({dp[i-1][j-1],dp[i][j-1],dp[i-1][j]});
            }
        }
        return dp[word1.size()][word2.size()];
    }
};