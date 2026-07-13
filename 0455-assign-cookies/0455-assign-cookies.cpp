class Solution {
public:
    int findContentChildren(vector<int>& child, vector<int>& cookie) {
        sort(child.begin(),child.end());
        sort(cookie.begin(),cookie.end());
        if(cookie.size()==0 || child.size()==0) return 0;
        int count=0;
        int left=0;
        int i=0;
        while(i<=child.size()-1){
            if(left<=cookie.size()-1){
                if(child[i]<=cookie[left]){
                count++;
                left++;
                i++;
                }
                else left++;
            }
            else break;
        }
        return count;
    }
};