// Last updated: 11/29/2025, 9:02:08 AM
1class Solution {
2    public int missingNumber(int[] nums) {
3        int n = nums.length;
4        int total = n * (n + 1) / 2;
5
6        int sum = 0;
7        for (int x : nums) {
8            sum += x;
9        }
10
11        return total - sum;
12    }
13}
14