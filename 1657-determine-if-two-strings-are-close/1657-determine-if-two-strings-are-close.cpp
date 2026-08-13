class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;

        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(int i=0;i<word1.size();i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        for(auto& [key, freq] : mp1){
            if(mp2.find(key) == mp2.end())
                return false;
        }

        vector<int> f1, f2;

        for (auto& [key, freq] : mp1)
        f1.push_back(freq);

        for (auto& [key, freq] : mp2)
        f2.push_back(freq);

        sort(f1.begin(), f1.end());
        sort(f2.begin(), f2.end());

        if (f1 == f2) return true;

        return false;
    }
};