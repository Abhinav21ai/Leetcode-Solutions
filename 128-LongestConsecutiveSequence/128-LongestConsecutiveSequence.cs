// Last updated: 5/19/2026, 9:45:01 AM
1public class Solution 
2{
3    public int LongestConsecutive(int[] nums) 
4    {
5        HashSet<int> set = new HashSet<int>();
6
7        for(int i = 0; i < nums.Length; i++)
8        {
9            set.Add(nums[i]);
10        }
11
12        int longest = 0;
13
14        foreach(int num in set)
15        {
16            if(!set.Contains(num - 1))
17            {
18                int currentNum = num;
19                int streak = 1;
20
21                while(set.Contains(currentNum + 1))
22                {
23                    currentNum++;
24                    streak++;
25                }
26
27                if(streak > longest)
28                {
29                    longest = streak;
30                }
31            }
32        }
33
34        return longest;
35    }
36}