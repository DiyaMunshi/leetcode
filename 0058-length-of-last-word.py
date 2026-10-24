class Solution(object):
    def lengthOfLastWord(self, s):
        s1=s.split()
        b= s1[len(s1)-1]
        return len(b)
        