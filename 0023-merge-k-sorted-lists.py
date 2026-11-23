
import heapq

class Solution(object):
    def mergeKLists(self, lists):
        h = []

        for i, n in enumerate(lists):
            if n:
                heapq.heappush(h, (n.val, i, n))

        d = ListNode(0)
        c = d

        while h:
            v, i, n = heapq.heappop(h)

            c.next = n
            c = c.next

            if n.next:
                heapq.heappush(h, (n.next.val, i, n.next))

        c.next = None
        return d.next
