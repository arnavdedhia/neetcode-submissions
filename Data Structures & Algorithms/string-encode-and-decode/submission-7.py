class Solution:

    def encode(self, strs: List[str]) -> str:
        if not strs:
            return "__EMPTY_LIST__"
        return ".#-".join(strs)

    def decode(self, s: str) -> List[str]:
        if s == "__EMPTY_LIST__":
            return []
        return s.split(".#-")
