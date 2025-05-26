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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode* ptr1 = head;
        ListNode* ptr2 = head->next;
        while(ptr2!=nullptr){
            if(ptr1==head){
                ptr1->next = nullptr;
            }
            ListNode* temp = ptr2-> next;
            ptr2 -> next = ptr1;
            ptr1 = ptr2;
            ptr2 = temp;

        }
        return ptr1;
    }
};