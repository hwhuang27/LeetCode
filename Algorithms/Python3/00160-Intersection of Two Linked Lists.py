# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        # get length of A
        sizeA, sizeB = 0
        curr = headA
        while curr:
            sizeA += 1
            curr = curr.next
        # get length of B    
        curr = headB
        while curr:
            sizeB += 1
            curr = curr.next
        
        # balance A and B lists
        if sizeA > sizeB:
            for i in range(sizeA - sizeB):
                headA = headA.next
        elif sizeA < sizeB:
            for i in range(sizeB - sizeA):
                headB = headB.next
        
        # find intersected node
        while headA:
            if headA == headB:
                return headA
            headA = headA.next
            headB = headB.next

        return None

'''
    tc: O(n)
    sc: O(1)

    if we see a node in list1 == list2, then we know that there is an intersection
    [4,1,8,4,5]
    [5,6,1,8,4,5]
    return intersected node

    A: len = 5
    B: len = 6
        - move head of B by difference of len(B) - len(A)

    make lengths of A and B the same
    iterate through A and B to see if there is an interesected node
'''