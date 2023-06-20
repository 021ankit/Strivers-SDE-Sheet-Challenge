#include <bits/stdc++.h> 
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
       vector<int>ans;
       deque<int>q;
       for(int i=0; i<k; i++)
       {
           while(!q.empty() && q.back()<nums[i])
           q.pop_back();
           q.push_back(nums[i]);
       }
       ans.push_back(q.front());
       for(int i=k; i<nums.size(); i++)
       {
           while(!q.empty() && q.back()<nums[i])
           q.pop_back();
           if(!q.empty() && q.front()==nums[i-k])
            q.pop_front();
           q.push_back(nums[i]);
           ans.push_back(q.front());
       }
       return ans;
}
