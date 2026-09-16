class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        seen = set()
        for r in range(9):
            for c in range(9):
                if board[r][c] == ".":
                    continue
                rs = "row" + board[r][c] + "" + str(r)
                cs = "col" + board[r][c] + "" + str(c)
                bs = "box" + board[r][c] + "" + str(r // 3) + "" + str(c // 3)
                if rs in seen or cs in seen or bs in seen:
                    return False
                seen.add(rs)
                seen.add(cs)
                seen.add(bs)
        return True
        