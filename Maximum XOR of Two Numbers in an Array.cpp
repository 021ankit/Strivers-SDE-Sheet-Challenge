#include <bits/stdc++.h> 
struct Node{
        Node *links[2];
        bool contains(int bit)
        {
            return links[bit]!=NULL;
        }
        void put(int bit,Node *node)
        {
            links[bit]=node;
        }
        Node *get(int bit)
        {
            return links[bit];
        }
    };
    class Trie{
        public:
        Node *root;
        Trie(){
            root=new Node();
        }
        void insert(int num)
        {
            Node *node=root;
            for(int i=31; i>=0; i--)
            {
                int bit= (num>>i)&1;
                if(!node->contains(bit))
                {
                    node->put(bit,new Node());
                }
                node=node->get(bit);
            }
        }
        int findmaximum(int num)
        {
            Node *node=root;
            int maximum=0;
            for(int i=31; i>=0; i--)
            {
                int bit=(num>>i)&1;
                if(node->contains(1-bit))
                {
                    maximum= maximum | (1<<i);
                    node=node->get(1-bit);
                }
                else
                {
                    node=node->get(bit);
                }
            }
            return maximum;
        }
    };
int maximumXor(vector<int> A)
{
      Trie t;
       int n=A.size(),ans=0;
       for(int i=0; i<n; i++)
       {
           t.insert(A[i]);
       } 
       for(int i=0; i<n; i++)
       {
           ans=max(ans,t.findmaximum(A[i]));
       }
       return ans;
}
