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
        ListNode* h=new ListNode(-1,head);
        ListNode* previous=h;
        ListNode* current=head;
        while(head!=nullptr){
            current=head;
            if(current->val==val){
                previous->next=current->next;
                head=head->next;
            }
            else{
            previous=current;
            head=head->next;
            }
        }
        return h->next;
    }
};