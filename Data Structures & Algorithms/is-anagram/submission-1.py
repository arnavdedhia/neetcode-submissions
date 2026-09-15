from collections import Counter
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        letters = Counter(s)
        letters2 = Counter(t)
        return letters == letters2