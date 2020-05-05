//https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem

bool has_cycle(SinglyLinkedListNode* head) {

set<SinglyLinkedListNode*> addresses;
while(head)
{
    if(addresses.count(head)==1)
        return true;
    addresses.insert(head);
    head=head->next;
}
return false;

}
