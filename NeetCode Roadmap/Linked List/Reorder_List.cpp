#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* currPtr = head;
        int length=0; // length of the linked list.
        while(currPtr!=nullptr){
            length++;
            currPtr = currPtr->next;
        }
        if(length<=2){
            return;
        }
        int mid = length/2;
        ListNode* secondListPtr;
        currPtr = head;
        int i=0;
        while(1){
            i++;
            if(i==mid){
                secondListPtr = currPtr->next;
                currPtr->next = nullptr;
                break;
            }
            currPtr=currPtr->next;
        }

        //now I have to reverse the 2nd linked list
        currPtr=secondListPtr;
        ListNode* nxtPtr=secondListPtr->next;
        currPtr->next = nullptr;
        ListNode* temp;
        while(nxtPtr!=nullptr){
            temp = nxtPtr->next;
            nxtPtr->next = currPtr;
            currPtr = nxtPtr;
            secondListPtr = nxtPtr; //this will act as the head pointer at the end of this loop.
            nxtPtr = temp;
        }

        //Now the 2 linked lists will be added 1 node from the 1st ll then 1 node from 2nd ll , round robin styled.
        currPtr = head;

        ListNode* temp1;
        ListNode* temp2;
        while(1){
            temp1 = currPtr->next;
            temp2 = secondListPtr->next;
            currPtr->next = secondListPtr;
            
            if(temp1==nullptr){
                break;
            }

            secondListPtr->next = temp1;
            currPtr = temp1;
            secondListPtr = temp2;    
        }
        

        
    }
};
int main(){

    return 0;
}