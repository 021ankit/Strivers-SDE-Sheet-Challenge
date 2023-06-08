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
pair<Node*,Node*> reverse(Node* head,int n)
{
	Node *temp=head,*next,*prev=NULL;
	while(temp && n>=1)
	{
		next=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next;
		n--;
	}
	return {prev,next};
}
Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	Node* dummy=new Node(-1);
	Node* ptr=dummy;
	ptr->next=head;
	int i=0;
	while(head && i<n)
	{  
		if(b[i]==0){i++; continue;}
		 auto it=reverse(head,b[i]);
		ptr->next= it.first;
		head->next=it.second;
		ptr=head;
		head=it.second;
		i++;
	}
	return dummy->next;
}
