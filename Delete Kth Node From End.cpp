/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    Node* slow=head,*fast=head;
    while(k--)
    fast=fast->next;
    if(fast==NULL)  
    {
        return head->next;
    }
    while(fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    Node *del=slow->next;
    slow->next=del->next;
    delete del;
    return head;
}
