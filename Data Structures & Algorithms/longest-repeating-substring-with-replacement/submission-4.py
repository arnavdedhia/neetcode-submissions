class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        char_counts = {}  # The Frequency Map
        left = 0          # Left boundary of the window
        max_len = 0       # Stores our longest valid window size
        
        # 'right' acts as the right boundary of the window
        for right in range(len(s)):
            # 1. Expand the window by adding the new character to our map
            incoming_char = s[right]
            char_counts[incoming_char] = char_counts.get(incoming_char, 0) + 1
            
            # 2. Find the count of the most frequent character currently in the window
            max_freq = max(char_counts.values())
            current_window_len = right - left + 1
            
            # 3. If the characters we need to change exceed k, shrink the window from the left
            while current_window_len - max_freq > k:
                outgoing_char = s[left]
                char_counts[outgoing_char] -= 1  # Evict from map
                left += 1                        # Move left pointer forward
                
                # Update window length and max frequency for the newly shrunk window
                current_window_len = right - left + 1
                max_freq = max(char_counts.values())
            
            # 4. Grab the maximum valid window size we've seen so far
            max_len = max(max_len, current_window_len)
            
        return max_len
