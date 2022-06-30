#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first==NULL)return second;
    if(second==NULL)return first;
    Node<int> *head=new Node<int>(1);
    Node<int>* tail;
    tail=head;
    while(first!=NULL && second!=NULL)
    {
        if(first->data < second->data){
            tail->next=first;
            first=first->next;
            tail=tail->next;
      
        }
        else{
             tail->next=second;
            second=second->next;
            tail=tail->next;
        }
    }
    if(first==NULL)tail->next=second;
    else tail->next=first;
    return head->next;
}
