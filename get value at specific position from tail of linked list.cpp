https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem

int getNode(SinglyLinkedListNode* head, int positionFromTail) {

SinglyLinkedListNode *curr=head , *result=head;

int count = 0;
    while(curr!=nullptr)
    {
        curr=curr->next;
        if(positionFromTail < count++)
        {
            result=result->next;
        }    
    }
    return result->data;
}
