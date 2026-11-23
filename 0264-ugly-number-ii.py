
class Solution(object):
    def nthUglyNumber(self, n):

        dp = [1]
        a = b = c = 0

        for i in range(1, n):

            x = dp[a] * 2
            y = dp[b] * 3
            z = dp[c] * 5

            m = min(x, y, z)
            dp.append(m)

            if m == x:
                a += 1
            if m == y:
                b += 1
            if m == z:
                c += 1

        return dp[n - 1]
