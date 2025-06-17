// Last updated: 6/17/2025, 10:45:11 AM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> myset(nums.begin(), nums.end());
        return myset.size() != nums.size();
    }
};