# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        size = 0
        curr = head
        while curr:
            size += 1
            curr = curr.next 

        mid = size//2
        for i in range(mid):
            head = head.next

        return head

'''
    do one pass to find length of list
    do another pass to return head of middle node

    tc: O(n)
    sc: O(1)

'''