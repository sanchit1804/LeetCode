class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> nums;


        for (int i = 0; i < timePoints.size(); i++) {
            string x = timePoints[i];

            string h = "";
            h += x[0];
            h += x[1];

            string m = "";
            m += x[3];
            m += x[4];

            int hour = stoi(h);
            int minute = stoi(m);

            int total = hour * 60 + minute;
            nums.push_back(total);
        }

        sort(nums.begin(), nums.end());

        int ans = INT_MAX;

        
        for (int i = 0; i < nums.size() - 1; i++) {
            ans = min(ans, nums[i + 1] - nums[i]);
        }

        
        ans = min(ans, 1440 - nums.back() + nums.front());

        return ans;
    }
};