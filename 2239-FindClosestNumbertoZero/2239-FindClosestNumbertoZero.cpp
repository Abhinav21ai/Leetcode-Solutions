// Last updated: 6/17/2025, 12:19:48 PM
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int close = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int curr = nums[i];

            if (abs(curr) < abs(close)) {
                close = curr;
            }
            else if (abs(curr) == abs(close) && curr > close) {
                close = curr;
            }
        }

        return close;
    }
};
