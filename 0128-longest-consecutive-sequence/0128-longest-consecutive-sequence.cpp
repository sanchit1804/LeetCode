class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp;

        for (int num : nums) {
            mp.insert(num);
        }

        int ans = 0;

        for (int num : mp) {

            if (mp.find(num - 1) == mp.end()) {

                int length = 0;
                int next = num;

                while (mp.find(next) != mp.end()) {
                    length++;
                    next++;
                }

                ans = max(ans, length);
            }
        }

        return ans;
    }
};