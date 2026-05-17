// Last updated: 5/17/2026, 5:26:11 PM
1public class Solution {
2    public int SingleNumber(int[] nums) {
3        Array.Sort(nums);
4
5        for(int i = 0; i < nums.Length; i++)
6        {
7            if(i == nums.Length - 1)
8            {
9                return nums[i];
10            }
11
12            if(nums[i] == nums[i + 1])
13            {
14                i++;
15            }
16            else
17            {
18                return nums[i];
19            }
20        }
21
22        return -1;
23    }
24}