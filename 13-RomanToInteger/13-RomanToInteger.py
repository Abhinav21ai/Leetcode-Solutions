# Last updated: 6/17/2025, 8:26:35 AM
class Solution:
    def romanToInt(self, s: str) -> int:
        roman_values = {
            "I": 1, "V": 5, "X": 10, "L": 50,
            "C": 100, "D": 500, "M": 1000
        }

        total = 0
        prev_value = 0  

        for char in reversed(s):  
            curr_value = roman_values[char]
            if curr_value < prev_value:  
                total -= curr_value
            else:
                total += curr_value
            
            prev_value = curr_value  
        
        return total