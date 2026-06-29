
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* last=NULL;

        while(curr!=NULL){
            ListNode* next=curr->next;
            curr->next=last;
            last=curr;
            curr=next;

        }
        return last;
    }
};