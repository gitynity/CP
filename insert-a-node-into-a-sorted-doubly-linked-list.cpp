//https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
DoublyLinkedListNode* a = new DoublyLinkedListNode(data);

if(head==nullptr)
{
    head = a;
}
if(head->next==nullptr)
    {
        head->next = a;
        a->prev = head;
    }

auto ptr = head ;
int flag = 0;

while( ptr->data <= data )
{
    if(ptr->next == nullptr)
    {
        flag = 1;
        break;
    }
    ptr = ptr->next;
}

if(ptr->prev!=nullptr && flag == 0)      //middle node
{
    ptr->prev->next = a;
    a->prev = ptr->prev;
    ptr->prev = a;
    a->next = ptr;
}

else if(ptr==head)           //first node
{
    ptr->prev = a;
    a->next = ptr;

    head = a;
}
else if(flag == 1)           //lastnode
{
    cout<<ptr->data<<endl;
    ptr->next = a;
    a->prev = ptr;
}
return head;
}
