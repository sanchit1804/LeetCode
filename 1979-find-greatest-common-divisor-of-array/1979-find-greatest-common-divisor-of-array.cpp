class Solution {
public:
    int findGCD(vector<int>& nums) {
        int big=*min_element(nums.begin(),nums.end());
        int small=*max_element(nums.begin(),nums.end());
        int x=small;

        while(x>0){
            if(big%x==0 && small%x==0){
                return x;
            }
            else x--;
        }
        return 0;
    }
};