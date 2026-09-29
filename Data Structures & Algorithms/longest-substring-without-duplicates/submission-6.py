class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        chars = set()
        left = 0
        max_len = 0
        
        # 'right' acts as the expanding boundary of our window
        for right in range(len(s)):
            # If a duplicate is found, shrink the window from the left
            while s[right] in chars:
                chars.remove(s[left])
                left += 1
                
            chars.add(s[right])
            # Calculate the size of the current valid window
            max_len = max(max_len, right - left + 1)
            
        return max_len
