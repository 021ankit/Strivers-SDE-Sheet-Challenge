#include <bits/stdc++.h> 
// Stack class.
class Stack {
    
public:
    vector<int>arr;
    int t=-1,cap;
    Stack(int capacity) {
      arr.resize(capacity);
      t=-1;
      cap=capacity;
    }

    void push(int num) {
        // Write your code here.
        if(isFull())  return;
        t++;
        arr[t]=num;
    }

    int pop() {
        int ans=-1;
        if(isEmpty()) return ans;
        ans=arr[t];
        t--;
        return ans;
    }
    
    int top() {
        if(isEmpty())   return -1;
        return arr[t];
    }
    
    int isEmpty() {
     return t==-1;
    }
    
    int isFull() {
        return t==cap;
    }
    
};
