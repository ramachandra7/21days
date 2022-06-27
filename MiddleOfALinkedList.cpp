#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int findLength(Node *head){
    int l=0;
    while(head!=NULL)
    {
        l++;
        head=head->next;
    }
    return l;
}

Node* findMiddle(Node *head) {
    if(head==NULL) return head;
    int length=findLength(head);
    int middleindex=length/2;
    while(middleindex--)
    {
        head=head->next;
    }
    return head;
}
