# Last updated: 6/17/2025, 8:26:37 AM
class Solution:
    def isPalindrome(self, x: int) -> bool:
        x_str = str(x)  
        y = x_str[::-1]  
        return x_str == y 
        