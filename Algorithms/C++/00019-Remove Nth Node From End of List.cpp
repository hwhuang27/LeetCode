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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size{0};
        while(temp != nullptr){
            temp = temp->next;
            size++;
        }
        if(size == n) return head->next;

        temp = head;        // reset head
        size = size - n;    // target node at this index
        ListNode* prevNode;
        while(size > 0){
            if(size == 1){
                prevNode = temp;
            }
            temp = temp->next;
            size--;
        }

        prevNode->next = temp->next;
        return head;
    }
};

/*
    tc: O(n)
    sc: O(1)

    list size = 5
    remove node at index (size - n)
    
    case 1: target is in middle / target is at end
    - iterate through list once to find the size
    - iterate list again and stop at target node
    - move prevNode pointer to nextNode
    
    case 2: target is at start
    - if size == n
    - then return head->next;




*/