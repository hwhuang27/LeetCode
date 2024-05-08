# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        def reverseList(head: Optional[ListNode]) -> Optional[ListNode]:
            prev = None
            curr = head
            while curr:
                temp = curr.next    # save next node
                curr.next = prev    # set curr next to prev
                prev = curr         # set prev to curr
                curr = temp         # move to next node
            return prev
        
        curr = reverseList(head)
        dummy = curr
        while curr:
            while curr.next and (curr.next.val < curr.val):
                curr.next = curr.next.next
            curr = curr.next
       
        return reverseList(dummy)

'''
    5 - 2 - 13 - 3 - 8
    reverse list
    8 - 3 - 13 - 2 - 5
    check if next nodes are strictly less than current
    if less, skip over
    8 - 13
    reverse list
    13 - 8
'''