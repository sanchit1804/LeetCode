class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>mp (nums.begin(),nums.end());
        int ans=0;
        for(int num:mp){
            if(mp.find(num-1)==mp.end()){
                int curr=num;
                int count=1;
                while(mp.find(curr+1)!=mp.end()){
                    count++;
                    curr++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};