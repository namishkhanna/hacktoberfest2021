ListNode* insertionSortList(ListNode* head) {
    if (head == nullptr || head->next == NULL)
        return head;
    ListNode *h = insertionSortList(head->next);
    if (head->val <= h->val) {  
        head->next = h;
        return head;
    }
    ListNode *node = h;   
    while (node->next && head->val > node->next->val)
        node = node->next;
    head->next = node->next;
    node->next = head;
    return h;
}
