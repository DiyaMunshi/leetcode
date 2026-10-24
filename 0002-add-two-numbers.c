/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* add(struct ListNode* l,int a)
{
    struct ListNode*p=NULL,*t=l;
    p=(struct ListNode*)malloc(sizeof(struct ListNode));
    p->val=a;
    p->next=NULL;
    if(t==NULL)
    t=p;
    else
    {
        t->next=p;
        t=p;
    }
    return t;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int i = 0,c=0;
    struct ListNode* l3=NULL,*r=NULL;
    while (l1 != NULL || l2 != NULL ||c!=0) {
        if (l1 == NULL && l2 != NULL) {
           i=l2->val+c;
            c=0;
            if(i>9)
           { c=i/10;
             i=i%10;}
           r= add(r,i);
           if(l3==NULL)
           l3=r;
           l2=l2->next;
        } else if (l2 == NULL && l1 != NULL) {
            i=l1->val+c;
            c=0;
            if(i>9)
           { c=i/10;
             i=i%10;}
           r= add(r,i);
            if(l3==NULL)
           l3=r;
            l1 = l1->next;
        } else if(l1==NULL && l2==NULL && c!=0){
            r= add(r,c);
            if(l3==NULL)
           l3=r;
            c=0;
        }else {
            i=l1->val+l2->val+c;
            c=0;
            if(i>9)
           { c=i/10;
             i=i%10;}
             r=add(r,i);
             if(l3==NULL)
           l3=r;
            l1 = l1->next;
            l2 = l2->next;
        }
    }
    return l3;
}
