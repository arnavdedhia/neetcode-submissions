class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        init = Counter(s1)
        l = len(s1) - 1
        sec = {}
        for i, a in enumerate(s2):
            sec[a] = sec.get(a, 0) + 1
            if i >= l:
                if init == sec:
                    return True
                out = s2[i - l]
                sec[out] -= 1
                if sec[out] == 0:
                    del sec[out]
        return init == sec