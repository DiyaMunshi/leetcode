class Solution(object):
    def countBits(self, n):
        l=[]
        for i in range (0,n+1):
            b=[]
            if i==1 or i==0:
                l.append(i)
            else:
                a=i
                while a>=1:
                   b.append(a%2)
                   a=a/2
                p=sum(b)
                l.append(p)
        return l

                
                    