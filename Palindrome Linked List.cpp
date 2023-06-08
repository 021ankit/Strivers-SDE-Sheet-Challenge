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
LinkedListNode<int> * reverse(LinkedListNode<int> *head)
{
    LinkedListNode<int> *temp=head,*next,*prev=NULL;
    while(temp)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
    if(!head || !head->next)    return true;
    LinkedListNode<int> *slow=head,*fast=head->next;
    while(fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    //fast=slow->next;
    slow->next=reverse(slow->next);
   // fast=reverse(fast);
    LinkedListNode<int> *temp1=head,*temp2=slow->next;
    while(temp2 && temp1)
    {
        if(temp1->data!=temp2->data)    return false;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;

}
