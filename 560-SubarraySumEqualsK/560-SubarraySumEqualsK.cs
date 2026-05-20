// Last updated: 5/20/2026, 10:23:34 AM
1public class Solution {
2    public int SubarraySum(int[] nums, int k) {
3        Dictionary<int, int> prefixMap = new Dictionary<int, int>();
4
5        prefixMap[0] = 1;
6
7        int currentSum = 0;
8        int count = 0;
9
10        for(int i = 0; i < nums.Length; i++)
11        {
12            currentSum += nums[i];
13
14            int remove = currentSum - k;
15
16            if(prefixMap.ContainsKey(remove))
17            {
18                count += prefixMap[remove];
19            }
20
21            if(prefixMap.ContainsKey(currentSum))
22            {
23                prefixMap[currentSum]++;
24            }
25            else
26            {
27                prefixMap[currentSum] = 1;
28            }
29        }
30
31        return count;
32    }
33}