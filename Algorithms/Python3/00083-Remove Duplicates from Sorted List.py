# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return head
        curr = head
        initVal = curr.val

        while curr:
            prev = curr
            while curr and curr.val == initVal:
                curr = curr.next
                if not curr:
                    prev.next = None
                    return head
            prev.next = curr
            initVal = curr.val

        return head
'''
    1) use extra memory (set)
    2) update next pointers in place

    iterate through list
    store currVal
    while node is equal to currVal
        skip over until new value is seen
    handle case for last number

    tc: O(n)
    sc: O(1)
'''