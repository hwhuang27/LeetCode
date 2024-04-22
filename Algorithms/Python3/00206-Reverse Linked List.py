# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev = None

        while head:
            nextNode = head.next
            head.next = prev
            prev = head
            head = nextNode

        return prev

'''
tc: O(n)
sc: O(1)
1 - 2 - 3 - 4 - 5
5 - 4 - 3 - 2 - 1

to reverse list, 
    for each node, set its next pointer to the previous node
    track next node before changing next pointer of current node
    keep going until end of list


'''