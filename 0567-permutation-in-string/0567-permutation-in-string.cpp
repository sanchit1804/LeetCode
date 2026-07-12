class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> targetFreq;
        unordered_map<char,int> windowFreq;

        if(s1.size()>s2.size()) return 0;

        for(int i=0;i<s1.size();i++){
            targetFreq[s1[i]]++;
            windowFreq[s2[i]]++;
        }
        if(targetFreq==windowFreq) return 1;

        
        for(int right=s1.size();right<s2.size();right++){
            windowFreq[s2[right-s1.size()]]--;
            windowFreq[s2[right]]++;

            if(windowFreq[s2[right-s1.size()]]==0){
                windowFreq.erase(s2[right-s1.size()]);
            }

                    if(targetFreq==windowFreq) return 1;

        }
        return 0;
    }
};