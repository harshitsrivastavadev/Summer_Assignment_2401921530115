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
    bool isPalindrome(ListNode* head) {
        if( head==NULL || head->next==NULL){
            return true;
        }
        int count=0;
        ListNode*temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        count/=2;
        ListNode*curr=head;
        ListNode*prev=NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        ListNode*front;
        prev=NULL;
        while(curr){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        ListNode*H1=head;
        ListNode*H2=prev;
        while(H1 && H2){
            if(H1->val!=H2->val){
                return false;
            }
            else{
                H1=H1->next;
                H2=H2->next;
            }
        }
        return true;
    }
};
