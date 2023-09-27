class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m = len(matrix)
        n = len(matrix[0])
        rows = set()
        columns = set()

        for i in range(0,m):
            for j in range(0,n):
                if matrix[i][j] == 0:
                    rows.add(i)
                    columns.add(j)
        for r in rows:
            for j in range(0,n):
                matrix[r][j] = 0
        for c in columns:
            for i in range(0,m):
                matrix[i][c] = 0