# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteNode(self, node):
        curr = node

        while curr:
            curr.val = curr.next.val
            if curr.next.next is None:
                curr.next = None
                break
            curr = curr.next

        # while curr:
        #     print(curr.val, end=' ')
        #     curr = curr.next

        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """


'''
original: 4 - 5 - 1 - 9 - 8 - 7

1) Change current node value to next nodes value
2) Remove the tail

4 - 5 - 9 - 8 - 7 - 7 

4 - 5 - 9 - 8 - 7

'''