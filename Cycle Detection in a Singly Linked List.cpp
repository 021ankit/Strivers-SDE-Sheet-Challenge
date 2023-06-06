/****************************************************************

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


*****************************************************************/

bool detectCycle(Node *head)
{
    Node *slow=head,*fast=head->next;
    while(fast && fast->next)
    {
        if(fast==slow)  return 1;
        slow=slow->next;
        fast=fast->next->next;
    }
    return 0;
}
