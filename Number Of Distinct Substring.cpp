#include <bits/stdc++.h> 
 struct Node{
     Node *links[26];
     bool flag=false;
     bool contains(char ch)
     {
         return links[ch-'a']!=NULL;
     }
     void put(char ch,Node *node)
     {
         links[ch-'a']=node;
     }
     Node *get(char ch)
     {
         return links[ch-'a'];
     }
 };

int distinctSubstring(string &word) {
    int n=word.length();
    Node *root=new Node();
    int ans=0;
    for(int i=0; i<n; i++)
    {   
        Node *node=root;
        for(int j=i; j<n; j++)
        {
            if(!node->contains(word[j]))
            {
                ans++;
                node->put(word[j],new Node());
            }
            node=node->get(word[j]);
        }
    }
    return ans;
}
