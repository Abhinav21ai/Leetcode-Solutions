// Last updated: 5/16/2026, 10:28:20 AM
1class Solution {
2    public boolean check(int[] nums) {
3         int count = 0;
4        int n = nums.length;
5
6        for(int i = 0; i < n - 1; i++)
7        {
8            if(nums[i + 1] < nums[i])
9            {
10                count++;
11            }
12        }
13
14        if(nums[0] < nums[n - 1])
15        {
16            count++;
17        }
18
19        return count <= 1;
20    }
21    
22}