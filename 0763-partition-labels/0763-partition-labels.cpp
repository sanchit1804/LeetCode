class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastindex(26, -1);

        for (int i = 0; i < s.size(); i++) {
            lastindex[s[i] - 'a'] = i;
        }
        vector<int> result;
        int maxpartition=0;
        int left=0;
        for(int i=0;i<s.size();i++){
            maxpartition=max(lastindex[s[i] - 'a'],maxpartition);
            if(i==maxpartition){
                result.push_back(i-left+1);
                left=i+1;
            }
        }
        return result;
    }
};