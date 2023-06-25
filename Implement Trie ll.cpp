#include <bits/stdc++.h> 
struct Node{
    Node *links[26];
    bool flag=false;
    int freq=0;
    int prefix=0;
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
class Trie{

    public: Node *root;

    Trie(){
        // Write your code here.
        root=new Node();
    }

    void insert(string &word){
        // Write your code here.
        Node *node=root;
        for(auto x:word)
        {
           if(!node->contains(x))
           {
               node->put(x,new Node());
           }
           node=node->get(x);
           node->prefix++;
        }
        node->flag=true;
        node->freq++;
    }

    int countWordsEqualTo(string &word){
        Node *node=root;
        for(auto x:word)
        {
            if(!node->contains(x))
             return 0;
            node=node->get(x);
        }
        if(node->flag)
        return node->freq;
        return 0;
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        Node *node=root;
        for(auto x:word)
        {
            if(!node->contains(x))
             return 0;
            node=node->get(x);
        }
        return node->prefix;
    }

    void erase(string &word){
        // Write your code here.
        Node *node=root;
        for(auto x:word)
        {
            node=node->get(x);
            node->prefix--;
        }
        node->freq--;
    }
};
