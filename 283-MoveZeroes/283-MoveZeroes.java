// Last updated: 11/28/2025, 12:25:32 PM
1class Solution {
2    public void moveZeroes(int[] nums) {
3        int write = 0;
4
5        for (int read = 0; read < nums.length; read++) {
6            if (nums[read] != 0) {
7                nums[write++] = nums[read];
8            }
9        }
10
11        while (write < nums.length) {
12            nums[write++] = 0;
13        }
14    }
15}