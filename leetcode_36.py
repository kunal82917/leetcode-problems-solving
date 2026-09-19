class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:
        seen = set()

        for r in range(9):
            for c in range(9):
                val = board[r][c]
                if val == ".":
                    continue

                row_marker = (val, "row", r)
                col_marker = (val, "col", c)
                box_marker = (val, "box", r // 3, c // 3)

                if (
                    row_marker in seen
                    or col_marker in seen
                    or box_marker in seen
                ):
                    return False

                seen.add(row_marker)
                seen.add(col_marker)
                seen.add(box_marker)

        return True
