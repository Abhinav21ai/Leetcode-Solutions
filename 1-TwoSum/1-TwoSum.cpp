// Last updated: 6/17/2025, 12:57:33 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            if(mp.find(target - nums[i]) != mp.end()){
                return {mp[target - nums[i]], i};
            }
            mp[nums[i]] = i;


        }
return {};
    
    }
};