
#include<unordered_set>
 struct ListNode {
     int val;
     ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a=headA;
        ListNode *b=headB;
        std::unordered_set<ListNode*> temp;
        temp.insert(a);
        
        while(a->next!=nullptr){
            temp.insert(a->next);
            a=a->next;
        }
        for(auto x:temp){
            if(x==headB)return headB;
        }
        while(b->next!=nullptr){
            if(temp.find(b->next)!=temp.end()){
                return b->next;
            }
            b=b->next;
        }
        return nullptr;
        }
};