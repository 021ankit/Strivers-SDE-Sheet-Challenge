/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
    int length=0;
    Node *temp=head;
    Node*ptr=head;
    while(temp)
    {
       length++;
       ptr=temp;
       temp=temp->next;
    }
    k=k%length;
    temp=head;
    length= length-k;
    while(length!=1)
    {
      temp=temp->next;
      length--;
    }
    ptr->next=head;
    head=temp->next;
    temp->next=NULL;
    return head;
    
}
