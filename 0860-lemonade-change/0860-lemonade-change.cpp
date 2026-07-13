class Solution {
public:
    bool lemonadeChange(vector<int>& nums) {
        int five=0;
        int ten=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==5){
                five++;
            }
            if(nums[i]==10){
                ten++;
                if(five==0) return false;
                else five--;
            }
            if(nums[i]==20){
                if(ten>=1 && five>=1){
                    ten--;
                    five--;
                }
                else if(ten==0 && five>=3){
                    five-=3;
                }
                else return false;
            }

        }
        return true;
    }
};