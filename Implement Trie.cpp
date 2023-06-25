/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */
struct Node{
    struct Node* links[26];
    bool flag=false;
    bool contains(char ch)
    {
        return links[ch-'a']!=NULL;
    }
    void put(char ch,Node *node)
    {
        links[ch-'a']= node;
    }
    Node* get(char ch)
    {
        return links[ch-'a'];
    }
    void setend()
    {
        flag=true;
    }
    bool getend()
    {
        return flag;
    }
};

class Trie {

public:

    /** Initialize your data structure here. */
    Node *root;
    Trie() {
        root=new Node();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        Node *temp=root;
        for(auto x:word)
        {
            if(!temp->contains(x))
            {
                 Node *newnode= new Node();
                 temp->put(x,newnode);
            }
            temp=temp->get(x);
        }
        temp->setend();
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
         Node *temp=root;
         for(auto x:word)
         {
             if(!temp->contains(x))
              return false;
             temp=temp->get(x);
         }
         return temp->getend();
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node *temp=root;
        for(auto x:prefix)
        {
            if(!temp->contains(x))  return false;
            temp=temp->get(x);
        }
        return true;
    }
};
