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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return NULL;
            
        }
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count%2==0){
            
            count=(count/2)+1;
            cout<<count<<" ";
        }
        else{
            
            count=(count/2)+1;
            cout<<count<<" ";
        }
        int todel=1;
        temp=head;
        while(todel+1!=count){
            temp=temp->next;
            todel++;
        }
        ListNode* del=temp->next;
        temp->next=temp->next->next;
        delete del;
        return head;
    }
};