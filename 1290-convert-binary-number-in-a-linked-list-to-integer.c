/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode* p= head;
    int c=0,s=0;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    p=head;
    for(int i=c-1;i>=0;i--)
    {
        s+=(p->val*pow(2,i));
        p=p->next;
    }
    return s;
    
}