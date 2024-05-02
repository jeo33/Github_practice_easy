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
    bool hasCycle(ListNode *head) {
        if(head==nullptr)return false;
        vector<ListNode**> temp;
        temp.push_back(&head);
        while(head->next!=nullptr){
            for(auto s:temp){
                if(s==&(head->next)) return true;
            }
            temp.push_back(&head->next);
            head=head->next;
        }
        return false;
    }
};
