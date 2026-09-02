class Solution {
public:
    int maxDistToClosest(vector<int>& nums) {
        int leftzeros = 0;
        while (leftzeros < nums.size() && nums[leftzeros] == 0) {
            leftzeros++;
        }

        int rightzeros = 0;
        int i = nums.size() - 1;

        while (i >= 0 && nums[i] == 0) {
            rightzeros++;
            i--;
        }

        int zeros = 0;
        int maxzeros = 0;

        for (int i = leftzeros; i <= nums.size() - 1 - rightzeros; i++) {
            if (nums[i] == 0) {
                zeros++;
            } else {
                maxzeros = max(maxzeros, (zeros + 1) / 2);
                zeros = 0;
            }
        }

        return max({leftzeros, rightzeros, maxzeros});
    }
};