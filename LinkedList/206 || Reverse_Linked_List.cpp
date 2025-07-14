class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=head;
        stack<int>s;
        while(temp!=nullptr){
            s.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=nullptr){
            temp->val=s.top();
            s.pop();
            temp=temp->next;
        }
        return head;
    }
};
