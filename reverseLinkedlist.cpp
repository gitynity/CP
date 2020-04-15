//https://www.hackerrank.com/challenges/reverse-a-linked-list/problem

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) 
{

    SinglyLinkedListNode *prev=nullptr , *cur=head , *following=nullptr;

    while(cur)
    {
        following = cur->next;
        cur->next = prev;
        prev = cur;
        cur = following;
    }

    head = prev;
    
return head;
}

//HINT: Always use pen and paper to visualise linkedlists
