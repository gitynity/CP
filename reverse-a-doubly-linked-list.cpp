// https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
DoublyLinkedListNode *cur = head , *last = nullptr , *tail = nullptr;

if(head==nullptr || head->next==nullptr)        //if list is empty or has single node
    return head;
else
{
    while(cur)
    {
        if(cur->next == nullptr)
        {
            tail = cur;
        }
        cur->prev = cur->next;
        cur->next = last;
        last = cur;
        cur = cur->prev;

    }
}
return tail;
}
