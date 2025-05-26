#include<bits/stdc++.h>
using namespace std;

//   Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode mergedListHead;
        ListNode* currPtr = &mergedListHead; 

        while(list1!=nullptr && list2!=nullptr){
            if(list1->val < list2->val ){
                currPtr->next = list1;
                list1 = list1->next;
            }
            else{
                currPtr->next = list2;
                list2 = list2 -> next;
            }
            currPtr = currPtr->next;
        }
        if(list1==nullptr){
            while(list2!=nullptr){
                currPtr->next = list2;
                currPtr = currPtr->next;
                list2=list2->next;
            }
        }
        else{
            while(list1!=nullptr){
                currPtr->next = list1;
                currPtr = currPtr->next;
                list1=list1->next;
            }
        }
        return mergedListHead.next;
    }
};

int main(){
    ListNode mergedList;
    cout<<mergedList.val<<endl;
    ListNode currPtr = &mergedList;
    return 0;
}