# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        newList = dummy = ListNode()

        # merge nodes up to length of shorter list
        while list1 and list2:
            if list1.val < list2.val:
                value = list1.val
                list1 = list1.next
            else:
                value = list2.val
                list2 = list2.next
            node = ListNode(value)
            newList.next = node
            newList = newList.next

        # merge rest of nodes from longer list
        while list1 or list2:
            if list1:
                value = list1.val
                list1 = list1.next
            elif list2:
                value = list2.val
                list2 = list2.next
            node = ListNode(value)
            newList.next = node
            newList = newList.next 
                  
        return dummy.next

'''
    newList 
    [dummy, 1, 1, 2]

    [1,2,3,4,5]
    [1,2,3]

'''