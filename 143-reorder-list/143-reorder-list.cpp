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
    
    void reorderList(ListNode* head) {
        if(head==NULL){
            return ;
        }
        if(head->next==NULL){
            return;
        }
        stack<ListNode*> st;
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            st.push(temp);
            size++;
            temp=temp->next;
        }
        temp=head;
        cout<<st.size();
        for(int i=0;i<size/2;i++){
            ListNode* node=st.top();
            cout<<st.top()->val;
            st.pop();
            node->next=temp->next;
            temp->next=node;
            temp=temp->next->next;
        }
        temp->next=NULL;
        
        
        
    }
};