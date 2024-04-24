# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        prev = None
        curr = head

        # move curr to first non-target node
        while curr and curr.val == val:
            curr = curr.next
        
        start = curr
        # iterate through list, skipping target nodes
        while curr:
            # search for non-target node
            while curr.val == val:
                curr = curr.next
                prev.next = curr
                if not curr:
                    return start     
            prev = curr
            curr = curr.next

        return start      
        
'''
    track prev node
    
    iterate through list to check vals
    if we see target, set prev node to next node
    while next node is not target node (or end of list)
    
    1 - 6 - 6 - 6 - 1

    alternatively:
        - use extra memory to create a new list with non-target nodes

'''