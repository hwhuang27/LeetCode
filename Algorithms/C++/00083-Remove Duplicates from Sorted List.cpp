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

struct ListNode{
    int val;
    ListNode* next;
    ListNode* prev;
    
}

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* root = head;
        ListNode* prev = head;
        head = head->next;
        while(head != nullptr){
            if(head->val == prev->val){
                prev->next = head->next;
            }
            if(head->val != prev->val){
                prev = head;
            }
            head = head->next;
        }

        return root;
    }
};

/*
    1 -> 1 -> 2
    1 -> 2

*/