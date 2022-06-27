#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    Node(int x){
        this->data=x;
        this->next=NULL;
    }
    public:
    void print(Node *head){
        while(head->next!=NULL)
        {
            cout<<head->data<<"->";
            head=head->next;
        }
        cout<<head->data;
    }
};

int main()
{
    int t,x;
    cin>>t;
    //to create first node 28 to 30
    cin>>x;
    t--;
    Node* head= new Node(x);
    Node* temp=head;
    while(t--)
    {
        cin>>x;
        Node* te=new Node(x);
        temp->next=te;
        temp=temp->next;
        
    }
    head->print(head);
    return 0;
}
