//https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    if(head1==nullptr)
        return head2;
    if(head2==nullptr)
        return head2;    

    SinglyLinkedListNode* start = nullptr , *lastsmallnode = nullptr;
    if(head1->data < head2->data)
    {    start = head1; head1=head1->next; }
    else
    {    start = head2; head2 = head2->next; }
    lastsmallnode = start;

    while(head1 && head2)
    {
        if(head1->data < head2->data)
        {
            lastsmallnode->next = head1;
            lastsmallnode = head1;
            head1 = head1->next;
            
        }
        else
        {
            lastsmallnode->next = head2;
            lastsmallnode = head2;
            head2 = head2->next;

        }
    }

    if(head1)
    {
        lastsmallnode->next = head1;
    }
    if(head2)
    {
        lastsmallnode->next = head2;
    }    
return start;
}
