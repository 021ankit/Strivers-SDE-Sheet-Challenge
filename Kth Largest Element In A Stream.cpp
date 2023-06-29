#include <bits/stdc++.h> 
class Kthlargest {
public:
    priority_queue<int,vector<int>, greater<int> >pq;
    int k;
    Kthlargest(int K, vector<int> &arr) {
       // Write your code here.
       k=K;
       for(int i=0; i<arr.size(); i++)
       {
           pq.push(arr[i]);
       }
    }

    void add(int num) {
        // Write your code here.
        pq.push(num);
        if(pq.size()>k)
        pq.pop();
    }

    int getKthLargest() {
       // Write your code here.
       return pq.top();
    }

};
