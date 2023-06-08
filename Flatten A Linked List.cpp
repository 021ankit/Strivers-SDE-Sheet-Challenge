Node* merge(Node* head1,Node* head2)
{
    Node *dummy=new Node(-1);
    Node *ptr=dummy;
    while(head1 && head2)
    {
        if(head1->data <= head2->data)
        {
            ptr->bottom=head1;
            head1=head1->bottom;
        }
        else
        {
            ptr->bottom=head2;
            head2=head2->bottom;   
        }
        ptr=ptr->bottom;
    }
    if(head1) ptr->bottom=head1;
    if(head2) ptr->bottom=head2;
    return dummy->bottom;
}
Node *flatten(Node *root)
{
   if(!root || !root->next) return root;
   
   root->next= flatten(root->next);
   root= merge(root,root->next);
   return root;
}
