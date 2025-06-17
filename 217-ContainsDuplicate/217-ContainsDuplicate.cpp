// Last updated: 6/17/2025, 10:44:38 AM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> myset(nums.begin(), nums.end());
        return myset.size() != nums.size();
    }
};