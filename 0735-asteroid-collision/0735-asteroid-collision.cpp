class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int> st;

        for(int i=0;i<nums.size();i++){
            bool destroyed=false;
            while(!st.empty() && st.top()>0 && nums[i]<0){
                if(abs(st.top())<abs(nums[i])) st.pop();
                else if(abs(st.top())==abs(nums[i])){
                     st.pop();
                     destroyed = true;
                    break;
                }
                else{
                    destroyed=true; 
                    break;
                }
            }
            if(!destroyed) st.push(nums[i]);
            
        }
        int n = st.size();
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;      
    }
};