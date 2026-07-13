class Solution {
public:
    bool isSubsequence(string s, string t) {
        int left=0;
        for(int i=0;i<t.size();i++){
            if(s[left]==t[i]) left++;
        }
        return left==s.size();
    }
};