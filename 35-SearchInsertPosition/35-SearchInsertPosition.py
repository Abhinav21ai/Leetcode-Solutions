# Last updated: 6/17/2025, 8:26:28 AM
from typing import List

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        low, high = 0, len(nums) - 1
        
        while low <= high:
            mid = (low + high) // 2  
            
            if nums[mid] == target:
                return mid  
            elif nums[mid] < target:
                low = mid + 1  
            else:
                high = mid - 1 

        return low  

