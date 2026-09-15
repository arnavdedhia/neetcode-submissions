from collections import Counter
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        letters = Counter(s)
        letters2 = Counter(t)
        return letters == letters2