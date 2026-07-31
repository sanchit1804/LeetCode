class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(),nums.end());
        int ans=0;
        for(int num: mp){
            int count=1;
            if(mp.find(num-1)==mp.end()){
                int current=num;
                while(mp.find(current+1)!=mp.end()){
                    count++;
                    current++;
                }
                ans=max(count,ans);
            }
            else count=1;
            
        }
        return ans;
    }
};