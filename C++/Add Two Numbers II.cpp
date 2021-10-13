class Solution {
public:
    ListNode* reverse(ListNode* A)
    {
        ListNode* preptr = NULL;
        ListNode* nxtptr = NULL;
        ListNode* temp = A;
        while(temp != NULL)
        {
            nxtptr = temp->next;
            temp->next = preptr;
            preptr = temp;
            temp = nxtptr;
        }
        return preptr;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1 = reverse(l1);    //reverse l1
        l2 = reverse(l2);    //reverse l1
        
        ListNode* ans = new ListNode(0);
        ListNode* A = ans;
        int carry = 0;
        int sum;
        ListNode* a = l1;
        ListNode* b = l2;
        while(a!=NULL || b!=NULL)
        {
            sum = 0;
            if(a != NULL)
            {
                sum += a->val;
                a = a->next;
            }
            if(b != NULL)
            {
                sum += b->val;
                b = b->next;
            }
            sum += carry;
            
            ListNode* temp = new ListNode(sum%10);
            A->next = temp;
            A = A->next;
            carry = sum/10;
        }
        if(carry != 0)
        {
            ListNode* temp = new ListNode(carry);
            A->next = temp;
            A = A->next;
        }
        
        A = reverse(ans->next);
        return A;
    }
};
