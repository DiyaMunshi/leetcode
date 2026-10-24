class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        nums1.extend(nums2)
        nums1.sort()
        a=len(nums1)
        if a==0:
            return []
        elif a==1:
            return nums1[0]
        elif a%2 !=0:
            return float(nums1[a/2])
        else:
            return float(nums1[a/2]+nums1[(a/2)-1])/2




        