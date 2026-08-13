class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum2 += nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            sum2 -= nums[i];  // remove pivot from right side

            if (sum1 == sum2) {
                return i;
            }

            sum1 += nums[i];  // move pivot to left side
        }

        return -1;
    }
};