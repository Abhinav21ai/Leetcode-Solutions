// Last updated: 6/17/2025, 9:55:19 AM
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
    //     int var = -1;
    //     for(int i = 0; i<nums.size();i++){
    //         int a; 
    //         for(int j=i+1;j<nums.size();j++)
    //         if(nums[j]>nums[i]){
    //             a = nums[j] - nums[i];
    //             if(a>var){
    //                 var=a;
    //             }
    //         }
    //     }
    //     return var;
    // }

    int left = 0;
    int right = left + 1;
    int difference = -1;
    int maxDiff = INT_MIN;
    while(left < nums.size() && right < nums.size()){
        if(nums[right] > nums[left]){
            difference = nums[right] - nums[left];
            right++;
        }else{
            left++;
            right = left + 1;
        }

        maxDiff = max(maxDiff, difference);
    }

    return maxDiff;
    }
};