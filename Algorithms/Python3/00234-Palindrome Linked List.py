# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        dummy = head
        size = 0
        while dummy:
            size += 1
            dummy = dummy.next
        
        midpoint = size//2
        curr = head
        prev = None
        # reverse left side of list
        while midpoint > 0:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp
            midpoint -= 1
        # case where size is odd
        if size % 2 == 1:
            curr = curr.next

        # check left and right lists for equality
        # right pointer = curr | left pointer = prev
        while curr and prev:
            if curr.val != prev.val:
                return False
            curr = curr.next
            prev = prev.next
        
        return True
        
'''
    tc: O(n)
    sc: O(1)

    notice that left half of list is a reversed right half
    
    - find length of list by going through once
    - divide by 2 = midpoint
    - reverse left half of list UP TO midpoint
    - iterate through both lists to check if they are the same
    

1 - 2 - 2 - 1

1 - 2 - 3 - 2 - 1
2 - 1 - 3 - 2 - 1




'''