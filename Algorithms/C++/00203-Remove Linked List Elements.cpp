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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* result = head;
        ListNode* prev = nullptr;

        while(head != nullptr){
            if(head->val == val){
                if(prev == nullptr){
                    head = head->next;
                    result = head;
                } else if(head->next == nullptr){
                    prev->next = nullptr;
                    prev = head;
                    head = head->next;
                } else{
                    while(head->next != nullptr && head->next->val == val){
                        head = head->next;
                    }
                    prev->next = head->next;
                    prev = head;
                    head = head->next;
                }
                
            } else{
                prev = head;
                head = head->next;
            }

        }

        return result;
    }
};

/*
    - have a prev node
    case 1: target node at start
    case 2: target node in middle
    case 3: target node at end

*/