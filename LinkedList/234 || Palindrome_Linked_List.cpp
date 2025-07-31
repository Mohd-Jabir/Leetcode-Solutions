class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string s="";
        ListNode *temp=head;
        while(temp!=nullptr){
            int t=temp->val;
            s+=t-'0';
            temp=temp->next;
        }
        return (s==string(s.rbegin(),s.rend()))?true:false;
    }
};
