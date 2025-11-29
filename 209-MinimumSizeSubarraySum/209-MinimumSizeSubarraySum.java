// Last updated: 11/29/2025, 8:31:37 AM
1class Solution {
2    public int minSubArrayLen(int target, int[] nums) {
3        int n = nums.length;
4        int left = 0;
5        int sum = 0;
6        int minLen = Integer.MAX_VALUE;
7
8        for (int right = 0; right < n; right++) {
9            sum += nums[right];
10
11            while (sum >= target) {
12                minLen = Math.min(minLen, right - left + 1);
13                sum -= nums[left];
14                left++;
15            }
16        }
17
18        return (minLen == Integer.MAX_VALUE) ? 0 : minLen;
19    }
20}
21