/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int size{0};
        while(temp != nullptr){
            temp = temp->next;
            size++;
        }

        size = size/2;
        while(size > 0){
            head = head->next;
            size--;
        }

        return head;
    }
};

/*
    case 1: list size is odd
        - return node (size/2) + 1
    
    case 2: list size is even
        - return node (size/2) + 1

    - check size of list
    - return value of node (size/2) + 1

    sc: O(1)
*/