#include <bits/stdc++.h>
vector<int> findMedian(vector<int> &arr, int n){
	priority_queue<int>maxh;
    priority_queue<int,vector<int>,greater<int>>minh;
    vector<int>res;
    for(int i=0;i<n;i++){
        if(maxh.empty() || maxh.top()>=arr[i]) maxh.push(arr[i]);
        else minh.push(arr[i]);

        if(maxh.size()>minh.size()+1){
            minh.push(maxh.top());
            maxh.pop();
        }
        else if(maxh.size()<minh.size()){
            maxh.push(minh.top());
            minh.pop();
        }

        if(minh.size()<maxh.size()) res.push_back(maxh.top());
        else res.push_back((maxh.top()+minh.top())/2);
    }
   return res;
}
