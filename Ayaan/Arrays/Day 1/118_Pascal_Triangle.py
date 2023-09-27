class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        triangle = []
        
        def fact(n):
            if n == 0:
                return 1
            else:
                return n * fact(n - 1)
                

        for i in range(numRows):
            r = []
            for j in range (i+1):
                e = fact(i)// (fact(j)* fact(i-j))
                r.append(e)
            triangle.append(r)
        return triangle