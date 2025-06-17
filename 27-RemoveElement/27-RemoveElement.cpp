// Last updated: 6/17/2025, 9:54:18 AM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==val){
                nums.erase(nums.begin() + i);
                i--;
            }
        }

        a = nums.size();

        return a;
    }
};