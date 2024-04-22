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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int size{0};
        while(temp != nullptr){
            size++;
            temp = temp->next;
        }
        
        // get head of 2nd half of list
        int half = (size/2);
        ListNode* secondHead = head;
        while(half > 0){
            secondHead = secondHead->next;
            half--;
        }
        // if list size is odd, move up one node for secondHead
        if(size % 2 == 1) secondHead = secondHead->next;
        
        // reverse 1st half of list
        half = (size/2);
        temp = head;
        ListNode* prev = nullptr;
        while(half > 0){
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            half--;
        }

        // iterate through both second halves of list 
        half = (size/2);
        while(half > 0){
            if(prev->val != secondHead->val){
                std::cout << prev->val << " " << secondHead->val << "\n";
                return false;
            }
            prev = prev->next;
            secondHead = secondHead->next;
            half--;
        }

        return true;
    }
};

/*
    O(n) and O(n)
    - go through list, put in array, and check via array
    
    O(n) and O(1)
    1 - 2 | 2 - 1

    - check the size -> even or odd
    - iterate through half of list (size/2)
    - store pointer at half+1
    - reverse 1st half of list
    - iterate through 1st half and 2nd half to check if values are equal

*/