// Last updated: 6/17/2025, 8:23:40 AM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int var = -1;
        for(int i = 0; i<nums.size();i++){
            int a; 
            for(int j=i+1;j<nums.size();j++)
            if(nums[j]>nums[i]){
                a = nums[j] - nums[i];
                if(a>var){
                    var=a;
                }
            }
        }
        return var;
    }
};