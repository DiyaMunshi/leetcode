class Solution(object):
    def isPowerOfFour(self, n):
        r=0
        if n<=0:
            return False
        while n>1:
            r=n%4
            if r!=0:
                return False
            n=n//4
        print(r)
        return True