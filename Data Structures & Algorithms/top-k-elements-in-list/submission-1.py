class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = Counter(nums).most_common(k);
        ret = []
        for a, count in freq:
            ret.append(a)
        return ret