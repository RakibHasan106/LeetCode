#include<bits/stdc++.h>
using namespace std;

 //* Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    // bool hasCycle(ListNode *head) {
    //     map<ListNode*,int> linkedListPosDictionary;
    //     while(head!=nullptr){
    //         if(linkedListPosDictionary.count(head)>0){
    //             return true;
    //         }
    //         linkedListPosDictionary[head]=1;
    //         head = head->next;
    //     }
    //     return false;
    // }
    /*more efficient*/
    bool hasCycle(ListNode *head) {
        ListNode cycleDetector = ListNode(-2);
        ListNode* ptr =  &cycleDetector;
        while(head!=nullptr){
            if(head->next==ptr){
                return true;
            }
            ListNode* temp = head->next;
            head->next = ptr;
            
            head = temp;
        }
        return false;
    }
};
