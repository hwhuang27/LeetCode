/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        // check if last node is the same
        ListNode* tempA = headA;
        int lenA{0};
        while(tempA->next != nullptr){
            tempA = tempA->next;
            lenA++;
        }
        ListNode* tempB = headB;
        int lenB{0};
        while(tempB->next != nullptr){
            tempB = tempB->next;
            lenB++;
        }

        // if intersection
        if(tempA == tempB){
            int diff{0};
            if(lenA > lenB){
                diff = lenA - lenB;
                while(diff > 0){
                    headA = headA->next;
                    diff--;
                }
            } else if(lenB > lenA){
                diff = lenB - lenA;
                while(diff > 0){
                    headB = headB->next;
                    diff--;
                }
            }

            while(headA != nullptr){
                if(headA == headB) return headA;
                headA = headA->next;
                headB = headB->next;
            }

        }

        // if no intersection, return nullptr
        return nullptr;
    }
};

/*
    no hash set (with pointers)
    tc: O(n + m)
    sc: O(1)

    1st step:
        - we can figure out if two lists are intersected by checking the last node
    2nd step:
        - change length of lists such that they are equal
        - iterate thru both lists to find same node
        - return same node
        
    otherwise return nullptr if no intersection

    hash set (with ListNodes)

    - add list A into set
    - iterate through list B to see if ListNode is already contained in our set
    - if yes, return the ListNode that is contained
    - if no, return null

    tc: O(n + m)
    sc: O(n)



*/