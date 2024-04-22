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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr && list2 == nullptr) return nullptr;
        if(list2 == nullptr && list1 != nullptr) return list1;
        if(list1 == nullptr && list2 != nullptr) return list2;

        int firstVal{0};
        if(list1->val <= list2->val){
            firstVal = list1->val;
            list1 = list1->next;
        } else{
            firstVal = list2->val;
            list2 = list2->next;
        }

        ListNode* sorted = new ListNode(firstVal);
        ListNode* result = sorted;

        while(!(list1 == nullptr && list2 == nullptr)){
            // if both lists have nodes left
            if(list1 != nullptr && list2 != nullptr){
                if(list1->val <= list2->val){
                    ListNode* node = new ListNode(list1->val);
                    sorted->next = node;
                    sorted = sorted->next;
                    list1 = list1->next;
                } else{
                    ListNode* node = new ListNode(list2->val);
                    sorted->next = node;
                    sorted = sorted->next;
                    list2 = list2->next;
                }
            }

            // if only one list has nodes left
            if(list1 == nullptr && list2 != nullptr){
                while(list2 != nullptr){
                    ListNode* node = new ListNode(list2->val);
                    sorted->next = node;
                    sorted = sorted->next;
                    list2 = list2->next;
                }
            } else if(list2 == nullptr && list1 != nullptr){
                
                while(list1 != nullptr){
                    ListNode* node = new ListNode(list1->val);
                    sorted->next = node;
                    sorted = sorted->next;
                    list1 = list1->next;
                }
            }

        }

        return result;

    }
};