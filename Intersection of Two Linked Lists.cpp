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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    Node* ptr1=firstHead, *ptr2=secondHead;
    int cnt1=0,cnt2=0;
    while(ptr1)
    {
        cnt1++;
        ptr1=ptr1->next;
    }
    while(ptr2)
    {
        cnt2++;
        ptr2=ptr2->next;
    }
    ptr1= cnt1>cnt2? firstHead:secondHead;
    ptr2= cnt1>cnt2? secondHead:firstHead;
    cnt1=abs(cnt1-cnt2);
    while(cnt1--)
     ptr1=ptr1->next;
    while(ptr1)
    {
        if(ptr1==ptr2)
         return ptr1;
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
}
