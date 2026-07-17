class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # Row duplicate check
        for i in range(9):
            row_check = set()
            for j in range(9):
                if board[i][j] == ".":
                    continue
                if board[i][j] in row_check:
                    return False
                row_check.add(board[i][j])

        # Column duplicate check
        for i in range(9):
            col_check = set()
            for j in range(9):
                if board[j][i] == ".":
                    continue
                if board[j][i] in col_check:
                    return False
                col_check.add(board[j][i])

        # Box duplicate check
        box_check = {}  # box index -> set of values

        for i in range(9):
            for j in range(9):
                if board[i][j] == ".":
                    continue

                box = (i // 3) * 3 + (j // 3)

                if box not in box_check:
                    box_check[box] = set()

                if board[i][j] in box_check[box]:
                    return False

                box_check[box].add(board[i][j])

        return True
        