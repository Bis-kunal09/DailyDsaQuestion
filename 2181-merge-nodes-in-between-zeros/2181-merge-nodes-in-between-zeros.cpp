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
   ListNode* mergeNodes(ListNode* head) {
int sum=0;
ListNode *ans = new ListNode(0);
ListNode *temp = ans, *next=NULL;

    head = head->next;
    
    while(head){
        next = head->next;
        if(head->val == 0){
            head->val=sum;
            temp->next = head;
            head->next = NULL;
            temp = temp->next;
            sum=0;
        }else{
         sum += head->val;   
        }
        head = next;
    }
    
    return ans->next;
    
}
};