class Solution {
public:
    int maxRepeating(string sequence, string word) {
        vector<int> dp(sequence.size(), 0);

        for (int i = word.size() - 1; i < sequence.size(); i++) {
            if (sequence.substr(i - word.size() + 1, word.size()) == word){
                if(i>=word.size()) dp[i]=1+dp[i-word.size()];
                else dp[i]=1;
            }
                
        }

        return *max_element(dp.begin(), dp.end());
    }
};