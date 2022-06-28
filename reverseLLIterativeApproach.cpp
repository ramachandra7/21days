#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==NULL || head->next==NULL) return head;
   LinkedListNode<int> *prev=NULL, *curr=head,*n=head->next;
    while(curr!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=n;
        if(n!=NULL)n=n->next;
    }
    return prev;
}
