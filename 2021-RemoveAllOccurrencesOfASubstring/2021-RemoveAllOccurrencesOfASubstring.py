# Last updated: 6/17/2025, 8:26:24 AM
class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        isPart = True
        while isPart:
            if part in s:
                s=s.replace(part,"",1)
            else:
                isPart=False
                break
        return s
        