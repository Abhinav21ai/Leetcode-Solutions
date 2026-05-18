// Last updated: 5/18/2026, 11:00:25 AM
1public class Solution 
2{
3    public string ReversePrefix(string s, int k) 
4    {
5        string first = s.Substring(0, k);
6        string second = s.Substring(k);
7
8        string result = "";
9
10        for(int i = first.Length - 1; i >= 0; i--)
11        {
12            result += first[i];
13        }
14
15        result += second;
16
17        return result;
18    }
19}