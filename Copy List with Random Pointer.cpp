#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
        LinkedListNode<int> *temp=head;
        LinkedListNode<int> *dummy=new LinkedListNode<int> (-1);
        LinkedListNode<int> *ptr=dummy;
        unordered_map<LinkedListNode<int> *,LinkedListNode<int> *>mp;
        while(temp)
        {
            LinkedListNode<int>* newNode=new LinkedListNode<int>(temp->data);
            ptr->next=newNode;
            mp[temp]=newNode;
            temp=temp->next;
            ptr=ptr->next;
            
        }
        temp=head;
        ptr=dummy->next;
        while(temp)
        {
            ptr->random= mp[temp->random];
            ptr=ptr->next;
            temp=temp->next;
        }
        return dummy->next;

}
